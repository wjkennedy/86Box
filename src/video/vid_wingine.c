/*
 * 86Box    Canon object.station 41 Wingine video (skeleton)
 *
 * Placeholder device for Canon Wingine on-board graphics. This is a stub
 * to facilitate incremental integration and testing. MMIO, I/O ports, and
 * RAMDAC hookup will be implemented in a follow-up.
 */

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#define HAVE_STDARG_H
#include <86box/86box.h>
#include <86box/device.h>
#include <86box/io.h>
#include <86box/video.h>
#include <86box/mem.h>
#include <86box/plat_unused.h>
#include <86box/timer.h>
#include <86box/log.h>
#include <86box/rom.h>

typedef struct wingine_t {
    mem_mapping_t lfb_mapping;
    uint8_t      *vram;
    uint32_t      vram_size;

    /* Minimal register/model state */
    uint8_t       regs[256];
    uint8_t       index;
    uint16_t      xres;
    uint16_t      yres;
    uint8_t       bpp;     /* 8 or 16; implement 8bpp scanout for now */
    uint16_t      stride;  /* bytes per scanline */
    uint8_t       enabled;

    /* 8514/A-style E8 register block (subset) */
    uint16_t      reg_major_axis_pcnt; /* 0x96E8 */
    uint8_t       reg_write_mask;      /* 0xAAE8 */
    uint8_t       reg_read_mask;       /* 0xAEE8 */
    uint8_t       reg_color_compare;   /* 0xB2E8 */
    uint16_t      reg_fg_mix;          /* 0xBAE8 */
    uint16_t      reg_mfc_index;       /* 0xBEE8 index (hi bits) */
    uint16_t      reg_mfc_data;        /* 0xBEE8 data (low 12 bits) */
    uint16_t      reg_h_disp;          /* 0x06E8 */
    uint16_t      reg_h_sync_start;    /* 0x0AE8 */
    uint16_t      reg_h_sync_w;        /* 0x0EE8 */
    uint16_t      reg_v_total;         /* 0x12E8 */
    uint16_t      reg_v_disp;          /* 0x16E8 */
    uint16_t      reg_v_sync_start;    /* 0x1AE8 */
    uint16_t      reg_v_sync_w;        /* 0x1EE8 */
    uint16_t      reg_disp_ctrl;       /* 0x22E8 */
    uint16_t      reg_rom_vga_ctrl;    /* 0x46E8 */
    uint16_t      reg_subsys_cntl;     /* 0x48E8 (write), 0x2EE8 (readback) */
    uint16_t      reg_ext_52e8, reg_ext_56e8, reg_ext_5ae8, reg_ext_5ee8;

    /* VGA DAC palette (Bt485-compatible basic path) */
    uint8_t       dac_pel_mask;
    uint8_t       dac_write_index;
    uint8_t       dac_read_index;
    uint8_t       dac_step; /* 0..2 within RGB triplet */
    uint8_t       palette[256][3]; /* 6-bit values stored as 0..63 */

    /* Minimal blit engine busy emulation */
    int           engine_busy;
    pc_timer_t    engine_timer;

    /* Simple blit command via index/data window */
    uint8_t       cmd_pending;   /* 1 when a command is armed */

    /* Logger */
    void         *log;

    /* Optional video BIOS */
    rom_t         bios_rom;
} wingine_t;

/* Simple command indices in index/data window */
#define WG_IDX_SRC_X   0x20
#define WG_IDX_SRC_Y   0x21
#define WG_IDX_DST_X   0x22
#define WG_IDX_DST_Y   0x23
#define WG_IDX_WIDTH   0x24
#define WG_IDX_HEIGHT  0x25
#define WG_IDX_ROP     0x26  /* 0=COPY, 1=FILL */
#define WG_IDX_COLOR   0x27  /* 8bpp color index */
#define WG_IDX_CMD     0x28  /* bit0=START */

/* Forward declaration */
static void wingine_present(wingine_t *dev);

static void wingine_start_command(wingine_t *dev)
{
    /* Only 8bpp accelerated ops for now */
    if (dev->bpp != 8) {
        dev->cmd_pending = 0;
        return;
    }

    uint16_t sx = (uint16_t) dev->regs[WG_IDX_SRC_X] | ((uint16_t) dev->regs[WG_IDX_SRC_X + 0x10] << 8);
    uint16_t sy = (uint16_t) dev->regs[WG_IDX_SRC_Y] | ((uint16_t) dev->regs[WG_IDX_SRC_Y + 0x10] << 8);
    uint16_t dx = (uint16_t) dev->regs[WG_IDX_DST_X] | ((uint16_t) dev->regs[WG_IDX_DST_X + 0x10] << 8);
    uint16_t dy = (uint16_t) dev->regs[WG_IDX_DST_Y] | ((uint16_t) dev->regs[WG_IDX_DST_Y + 0x10] << 8);
    uint16_t w  = (uint16_t) dev->regs[WG_IDX_WIDTH] | ((uint16_t) dev->regs[WG_IDX_WIDTH + 0x10] << 8);
    uint16_t h  = (uint16_t) dev->regs[WG_IDX_HEIGHT] | ((uint16_t) dev->regs[WG_IDX_HEIGHT + 0x10] << 8);
    uint8_t  rop = dev->regs[WG_IDX_ROP] & 0x0f;
    uint8_t  col = dev->regs[WG_IDX_COLOR];

    if (!w || !h) { dev->cmd_pending = 0; return; }

    /* Bound checks */
    uint32_t maxw = dev->xres ? dev->xres : 640;
    uint32_t maxh = dev->yres ? dev->yres : 480;
    if (sx >= maxw || sy >= maxh || dx >= maxw || dy >= maxh) { dev->cmd_pending = 0; return; }
    if (sx + w > maxw) w = (uint16_t) (maxw - sx);
    if (dx + w > maxw) w = (uint16_t) (maxw - dx);
    if (sy + h > maxh) h = (uint16_t) (maxh - sy);
    if (dy + h > maxh) h = (uint16_t) (maxh - dy);

    /* Perform */
    if (rop == 0) {
        log_warning(dev->log, "BLIT COPY: %ux%u from (%u,%u) to (%u,%u)\n", w, h, sx, sy, dx, dy);
        /* COPY src->dst */
        for (uint16_t row = 0; row < h; row++) {
            uint8_t *s = dev->vram + (sy + row) * dev->stride + sx;
            uint8_t *d = dev->vram + (dy + row) * dev->stride + dx;
            memmove(d, s, w);
        }
    } else if (rop == 1) {
        log_warning(dev->log, "BLIT FILL: %ux%u at (%u,%u) color=%u\n", w, h, dx, dy, col);
        /* SOLID FILL */
        for (uint16_t row = 0; row < h; row++) {
            uint8_t *d = dev->vram + (dy + row) * dev->stride + dx;
            memset(d, col, w);
        }
    }

    dev->cmd_pending = 0;
    wingine_present(dev);
}

static uint8_t wingine_rdb(uint32_t addr, void *priv)
{
    wingine_t *dev = (wingine_t *) priv;
    if (!dev->vram_size)
        return 0xFF;
    return dev->vram[addr % dev->vram_size];
}

static uint16_t wingine_rdw(uint32_t addr, void *priv)
{
    uint16_t v = wingine_rdb(addr, priv);
    v |= ((uint16_t) wingine_rdb(addr + 1, priv)) << 8;
    return v;
}

static uint32_t wingine_rdl(uint32_t addr, void *priv)
{
    uint32_t v = wingine_rdw(addr, priv);
    v |= ((uint32_t) wingine_rdw(addr + 2, priv)) << 16;
    return v;
}

static void wingine_wrb(uint32_t addr, uint8_t val, void *priv)
{
    wingine_t *dev = (wingine_t *) priv;
    if (!dev->vram_size)
        return;
    dev->vram[addr % dev->vram_size] = val;
}

static void wingine_wrw(uint32_t addr, uint16_t val, void *priv)
{
    wingine_wrb(addr, (uint8_t) (val & 0xFF), priv);
    wingine_wrb(addr + 1, (uint8_t) (val >> 8), priv);
}

static void wingine_wrl(uint32_t addr, uint32_t val, void *priv)
{
    wingine_wrw(addr, (uint16_t) (val & 0xFFFF), priv);
    wingine_wrw(addr + 2, (uint16_t) (val >> 16), priv);
}

static uint8_t wingine_io_in(uint16_t port, void *priv)
{
    wingine_t *dev = (wingine_t *) priv;
    uint16_t   base = (port & 0xff00) == 0x8200 ? 0x82c6 : 0x02c6;
    switch (port - base) {
        case 0: /* INDEX */
            return dev->index;
        case 1: /* DATA */
        case 2:
        case 3:
            return dev->regs[dev->index];
        default:
            return 0xFF;
    }
}

static void wingine_io_out(uint16_t port, uint8_t val, void *priv)
{
    wingine_t *dev = (wingine_t *) priv;
    uint16_t   base = (port & 0xff00) == 0x8200 ? 0x82c6 : 0x02c6;
    switch (port - base) {
        case 0: /* INDEX */
            dev->index = val;
            log_warning(dev->log, "IDX WRITE: index=%02X\n", val);
            break;
        case 1: /* DATA */
        case 2:
        case 3: {
            uint8_t idx    = dev->index;
            dev->regs[idx] = val;
            log_warning(dev->log, "DATA WRITE: idx=%02X val=%02X\n", idx, val);
            if (idx == 0x11 || idx == 0x12 || idx == 0x13 || idx == 0x14 || idx == 0x15 || idx == 0x16 || idx == 0x17 || idx == 0x10) {
                uint16_t x    = (uint16_t) (dev->regs[0x11] | (dev->regs[0x12] << 8));
                uint16_t y    = (uint16_t) (dev->regs[0x13] | (dev->regs[0x14] << 8));
                uint8_t  bpp  = dev->regs[0x15] ? dev->regs[0x15] : 8;
                uint16_t strd = (uint16_t) (dev->regs[0x16] | (dev->regs[0x17] << 8));
                uint8_t  ena  = dev->regs[0x10] & 0x01;
                if (!x) x = 640;
                if (!y) y = 480;
                if ((bpp != 8) && (bpp != 16)) bpp = 8;
                if (!strd) strd = (uint16_t) (x * (bpp >> 3));
                dev->xres    = x;
                dev->yres    = y;
                dev->bpp     = bpp;
                dev->stride  = strd;
                dev->enabled = ena;
                wingine_present(dev);
            } else if (idx == WG_IDX_CMD) {
                if (val & 0x01) {
                    dev->cmd_pending = 1;
                    dev->engine_busy = 1;
                    /* Execute immediately for now */
                    wingine_start_command(dev);
                    /* Short delay before idle to mimic hardware */
                    timer_set_delay_u64(&dev->engine_timer, (uint64_t)(0.0005 * TIMER_USEC));
                }
            }
            break;
        }
        default:
            break;
    }
}

static void wingine_present(wingine_t *dev)
{
    if (!dev->enabled)
        return;

    int x = dev->xres ? dev->xres : 640;
    int y = dev->yres ? dev->yres : 480;
    if ((x != xsize) || (y != ysize) || video_force_resize_get()) {
        xsize = x;
        ysize = y;
        if (xsize < 64) xsize = 656;
        if (ysize < 32) ysize = 200;
        set_screen_size(xsize, ysize);
        if (video_force_resize_get())
            video_force_resize_set(0);
    }

    if (!buffer32 || !buffer32->dat)
        return;

    if (dev->bpp == 8) {
        uint32_t h = (uint32_t) y;
        uint32_t w = (uint32_t) x;
        for (uint32_t row = 0; row < h; row++) {
            uint8_t  *src = dev->vram + (row * dev->stride);
            uint32_t *dst = buffer32->line[row];
            for (uint32_t col = 0; col < w; col++) {
                uint8_t p   = src[col] & dev->dac_pel_mask;
                uint8_t r6  = dev->palette[p][0];
                uint8_t g6  = dev->palette[p][1];
                uint8_t b6  = dev->palette[p][2];
                uint32_t r8 = video_6to8 ? video_6to8[r6] : (r6 << 2);
                uint32_t g8 = video_6to8 ? video_6to8[g6] : (g6 << 2);
                uint32_t b8 = video_6to8 ? video_6to8[b6] : (b6 << 2);
                dst[col]    = 0xff000000u | (r8 << 16) | (g8 << 8) | b8;
            }
        }
        video_blit_memtoscreen(0, 0, x, y);
        frames++;
        video_res_x = x;
        video_res_y = y;
        video_bpp   = 1; /* 8bpp */
    }
}

/* VGA DAC I/O handlers */
static uint8_t wingine_pelmask_in(uint16_t port, void *priv)
{
    (void) port;
    return ((wingine_t *) priv)->dac_pel_mask;
}
static void wingine_pelmask_out(uint16_t port, uint8_t v, void *priv)
{
    (void) port;
    ((wingine_t *) priv)->dac_pel_mask = v;
}

static uint8_t wingine_dac_read_idx_in(uint16_t port, void *priv)
{
    (void) port;
    return ((wingine_t *) priv)->dac_read_index;
}
static void wingine_dac_read_idx_out(uint16_t port, uint8_t v, void *priv)
{
    (void) port;
    wingine_t *d = (wingine_t *) priv;
    d->dac_read_index = v;
    d->dac_step       = 0;
}

static uint8_t wingine_dac_write_idx_in(uint16_t port, void *priv)
{
    (void) port;
    return ((wingine_t *) priv)->dac_write_index;
}
static void wingine_dac_write_idx_out(uint16_t port, uint8_t v, void *priv)
{
    (void) port;
    wingine_t *d = (wingine_t *) priv;
    d->dac_write_index = v;
    d->dac_step        = 0;
}

static uint8_t wingine_dac_data_in(uint16_t port, void *priv)
{
    (void) port;
    wingine_t *d = (wingine_t *) priv;
    uint8_t    c = d->palette[d->dac_read_index][d->dac_step];
    d->dac_step  = (d->dac_step + 1) % 3;
    if (d->dac_step == 0)
        d->dac_read_index++;
    return c;
}

static void wingine_dac_data_out(uint16_t port, uint8_t v, void *priv)
{
    (void) port;
    wingine_t *d                                   = (wingine_t *) priv;
    d->palette[d->dac_write_index][d->dac_step]    = v & 0x3f; /* 6-bit */
    d->dac_step                                    = (d->dac_step + 1) % 3;
    if (d->dac_step == 0)
        d->dac_write_index++;
}

/* Engine busy timer callback */
static void wingine_engine_timer(void *pv)
{
    wingine_t *d   = (wingine_t *) pv;
    d->engine_busy = 0;
}

/* 8514/A-style E8 register handlers (byte/word) */
static uint8_t wingine_e8_inb(uint16_t port, void *priv)
{
    wingine_t *dev = (wingine_t *) priv;
    switch (port) {
        case 0x42e8: /* SUBSYS_STATUS (low byte) */
            return 0x00;
        case 0x42e9: { /* SUBSYS_STATUS (high byte) */
            /* Bit 3 reflects GP_IDLE: 1=idle, 0=busy */
            uint8_t idle = dev->engine_busy ? 0x00 : 0x08;
            return idle;
        }
        case 0x2ee8: /* SUBSYS_CNTL (readback) */
            return (uint8_t) (dev->reg_subsys_cntl & 0xff);
        case 0x2ee9:
            return (uint8_t) (dev->reg_subsys_cntl >> 8);
        case 0x06e8: return (uint8_t) (dev->reg_h_disp & 0xff);
        case 0x06e9: return (uint8_t) (dev->reg_h_disp >> 8);
        case 0x0ae8: return (uint8_t) (dev->reg_h_sync_start & 0xff);
        case 0x0ae9: return (uint8_t) (dev->reg_h_sync_start >> 8);
        case 0x0ee8: return (uint8_t) (dev->reg_h_sync_w & 0xff);
        case 0x0ee9: return (uint8_t) (dev->reg_h_sync_w >> 8);
        case 0x12e8: return (uint8_t) (dev->reg_v_total & 0xff);
        case 0x12e9: return (uint8_t) (dev->reg_v_total >> 8);
        case 0x16e8: return (uint8_t) (dev->reg_v_disp & 0xff);
        case 0x16e9: return (uint8_t) (dev->reg_v_disp >> 8);
        case 0x1ae8: return (uint8_t) (dev->reg_v_sync_start & 0xff);
        case 0x1ae9: return (uint8_t) (dev->reg_v_sync_start >> 8);
        case 0x1ee8: return (uint8_t) (dev->reg_v_sync_w & 0xff);
        case 0x1ee9: return (uint8_t) (dev->reg_v_sync_w >> 8);
        case 0x22e8: return (uint8_t) (dev->reg_disp_ctrl & 0xff);
        case 0x22e9: return (uint8_t) (dev->reg_disp_ctrl >> 8);
        case 0x96e8: return (uint8_t) (dev->reg_major_axis_pcnt & 0xff);
        case 0x96e9: return (uint8_t) (dev->reg_major_axis_pcnt >> 8);
        case 0xaae8: return dev->reg_write_mask;
        case 0xaee8: return dev->reg_read_mask;
        case 0xb2e8: return dev->reg_color_compare;
        case 0xbae8: return (uint8_t) (dev->reg_fg_mix & 0xff);
        case 0xbae9: return (uint8_t) (dev->reg_fg_mix >> 8);
        case 0x46e8: return (uint8_t) (dev->reg_rom_vga_ctrl & 0xff);
        case 0x46e9: return (uint8_t) (dev->reg_rom_vga_ctrl >> 8);
        case 0x52e8: return (uint8_t) (dev->reg_ext_52e8 & 0xff);
        case 0x56e8: return (uint8_t) (dev->reg_ext_56e8 & 0xff);
        case 0x5ae8: return (uint8_t) (dev->reg_ext_5ae8 & 0xff);
        case 0x5ee8: return (uint8_t) (dev->reg_ext_5ee8 & 0xff);
        default:
            return 0xff;
    }
}

static uint16_t wingine_e8_inw(uint16_t port, void *priv)
{
    uint16_t lo = wingine_e8_inb(port, priv);
    uint16_t hi = wingine_e8_inb(port + 1, priv);
    return lo | (hi << 8);
}

static void wingine_e8_outb(uint16_t port, uint8_t val, void *priv)
{
    wingine_t *dev = (wingine_t *) priv;
    switch (port) {
        case 0x48e8: /* SUBSYS_CNTL write */
            dev->reg_subsys_cntl = (dev->reg_subsys_cntl & 0xff00) | val;
            log_warning(dev->log, "SUBSYS_CNTL write: %04X\n", dev->reg_subsys_cntl);
            /* Treat bit0 as 'start operation' to emulate busy period */
            if (val & 0x01) {
                dev->engine_busy = 1;
                if (dev->cmd_pending)
                    wingine_start_command(dev);
                /* Short async delay before signaling idle */
                timer_set_delay_u64(&dev->engine_timer, (uint64_t)(0.0005 * TIMER_USEC));
            }
            break;
        case 0x48e9:
            dev->reg_subsys_cntl = (dev->reg_subsys_cntl & 0x00ff) | ((uint16_t) val << 8);
            break;
        case 0x06e8:
            dev->reg_h_disp = (dev->reg_h_disp & 0xff00) | val;
            dev->xres       = dev->reg_h_disp;
            wingine_present(dev);
            break;
        case 0x06e9:
            dev->reg_h_disp = (dev->reg_h_disp & 0x00ff) | ((uint16_t) val << 8);
            dev->xres       = dev->reg_h_disp;
            wingine_present(dev);
            break;
        case 0x0ae8: dev->reg_h_sync_start = (dev->reg_h_sync_start & 0xff00) | val; break;
        case 0x0ae9: dev->reg_h_sync_start = (dev->reg_h_sync_start & 0x00ff) | ((uint16_t) val << 8); break;
        case 0x0ee8: dev->reg_h_sync_w = (dev->reg_h_sync_w & 0xff00) | val; break;
        case 0x0ee9: dev->reg_h_sync_w = (dev->reg_h_sync_w & 0x00ff) | ((uint16_t) val << 8); break;
        case 0x12e8: dev->reg_v_total = (dev->reg_v_total & 0xff00) | val; break;
        case 0x12e9: dev->reg_v_total = (dev->reg_v_total & 0x00ff) | ((uint16_t) val << 8); break;
        case 0x16e8:
            dev->reg_v_disp = (dev->reg_v_disp & 0xff00) | val;
            dev->yres       = dev->reg_v_disp;
            wingine_present(dev);
            break;
        case 0x16e9:
            dev->reg_v_disp = (dev->reg_v_disp & 0x00ff) | ((uint16_t) val << 8);
            dev->yres       = dev->reg_v_disp;
            wingine_present(dev);
            break;
        case 0x1ae8: dev->reg_v_sync_start = (dev->reg_v_sync_start & 0xff00) | val; break;
        case 0x1ae9: dev->reg_v_sync_start = (dev->reg_v_sync_start & 0x00ff) | ((uint16_t) val << 8); break;
        case 0x1ee8: dev->reg_v_sync_w = (dev->reg_v_sync_w & 0xff00) | val; break;
        case 0x1ee9: dev->reg_v_sync_w = (dev->reg_v_sync_w & 0x00ff) | ((uint16_t) val << 8); break;
        case 0x22e8:
            dev->reg_disp_ctrl = (dev->reg_disp_ctrl & 0xff00) | val;
            /* bit 5-6 enable; for simplicity treat bit 5 as display on */
            dev->enabled = !!(dev->reg_disp_ctrl & 0x20);
            wingine_present(dev);
            break;
        case 0x22e9:
            dev->reg_disp_ctrl = (dev->reg_disp_ctrl & 0x00ff) | ((uint16_t) val << 8);
            break;
        case 0x96e8: dev->reg_major_axis_pcnt = (dev->reg_major_axis_pcnt & 0xff00) | val; break;
        case 0x96e9: dev->reg_major_axis_pcnt = (dev->reg_major_axis_pcnt & 0x00ff) | ((uint16_t) val << 8); break;
        case 0xaae8: dev->reg_write_mask = val; break;
        case 0xaee8: dev->reg_read_mask  = val; break;
        case 0xb2e8: dev->reg_color_compare = val; break;
        case 0xbae8: dev->reg_fg_mix = (dev->reg_fg_mix & 0xff00) | val; break;
        case 0xbae9: dev->reg_fg_mix = (dev->reg_fg_mix & 0x00ff) | ((uint16_t) val << 8); break;
        case 0xbee8:
            dev->reg_mfc_data  = (dev->reg_mfc_data & 0xff00) | val;
            break;
        case 0xbee9:
            dev->reg_mfc_index = (dev->reg_mfc_index & 0x00ff) | ((uint16_t) val << 8);
            break;
        case 0x46e8: dev->reg_rom_vga_ctrl = (dev->reg_rom_vga_ctrl & 0xff00) | val; break;
        case 0x46e9: dev->reg_rom_vga_ctrl = (dev->reg_rom_vga_ctrl & 0x00ff) | ((uint16_t) val << 8); break;
        case 0x52e8: dev->reg_ext_52e8 = (dev->reg_ext_52e8 & 0xff00) | val; break;
        case 0x56e8: dev->reg_ext_56e8 = (dev->reg_ext_56e8 & 0xff00) | val; break;
        case 0x5ae8: dev->reg_ext_5ae8 = (dev->reg_ext_5ae8 & 0xff00) | val; break;
        case 0x5ee8: dev->reg_ext_5ee8 = (dev->reg_ext_5ee8 & 0xff00) | val; break;
        default:
            break;
    }
}

static void wingine_e8_outw(uint16_t port, uint16_t val, void *priv)
{
    wingine_e8_outb(port, (uint8_t) (val & 0xff), priv);
    wingine_e8_outb(port + 1, (uint8_t) (val >> 8), priv);
}

static void *
wingine_init(UNUSED(const device_t *info))
{
    wingine_t *dev = (wingine_t *) calloc(1, sizeof(wingine_t));
    if (!dev)
        return NULL;

    /* Allocate a placeholder 2 MB framebuffer. */
    dev->vram_size = 2 * 1024 * 1024;
    dev->vram      = (uint8_t *) calloc(1, dev->vram_size);
    if (dev->vram) {
        /* Map linear framebuffer at 0x07600000 (2 MB). */
        mem_mapping_add(&dev->lfb_mapping, 0x07600000, dev->vram_size,
                        wingine_rdb, wingine_rdw, wingine_rdl,
                        wingine_wrb, wingine_wrw, wingine_wrl,
                        dev->vram, MEM_MAPPING_EXTERNAL, dev);
    }

    /* Try to load an optional Wingine video BIOS for int10/VBE at C0000. */
    rom_init(&dev->bios_rom, "roms/video/wingine/WINGINE.ROM", 0xc0000, 0x10000, 0xffff, 0, MEM_MAPPING_EXTERNAL);

    /* Expose minimal I/O decode at 0x2C6-0x2C9 and 0x82C6-0x82C9. */
    io_sethandler(0x02c6, 0x0004, wingine_io_in, NULL, NULL,
                  wingine_io_out, NULL, NULL, dev);
    io_sethandler(0x82c6, 0x0004, wingine_io_in, NULL, NULL,
                  wingine_io_out, NULL, NULL, dev);

    /* 8514/A-style E8 register window: register individual ports (byte/word). */
    uint16_t e8_ports[] = {
        0x02e8, 0x06e8, 0x0ae8, 0x0ee8, 0x12e8, 0x16e8, 0x1ae8, 0x1ee8,
        0x22e8, 0x26e8, 0x2ee8, 0x42e8, 0x46e8, 0x48e8, 0x52e8, 0x56e8,
        0x5ae8, 0x5ee8, 0x96e8, 0xaae8, 0xaee8, 0xb2e8, 0xbae8, 0xbee8
    };
    for (unsigned i = 0; i < (sizeof(e8_ports) / sizeof(e8_ports[0])); i++) {
        uint16_t p = e8_ports[i];
        io_sethandler(p, 0x0002, wingine_e8_inb, wingine_e8_inw, NULL,
                      wingine_e8_outb, wingine_e8_outw, NULL, dev);
    }

    /* VGA DAC ports: 0x3C6 PELMASK, 0x3C7 READ INDEX, 0x3C8 WRITE INDEX, 0x3C9 DATA */
    io_sethandler(0x03c6, 0x0001, wingine_pelmask_in, NULL, NULL, wingine_pelmask_out, NULL, NULL, dev);
    io_sethandler(0x03c7, 0x0001, wingine_dac_read_idx_in, NULL, NULL, wingine_dac_read_idx_out, NULL, NULL, dev);
    io_sethandler(0x03c8, 0x0001, wingine_dac_write_idx_in, NULL, NULL, wingine_dac_write_idx_out, NULL, NULL, dev);
    io_sethandler(0x03c9, 0x0001, wingine_dac_data_in, NULL, NULL, wingine_dac_data_out, NULL, NULL, dev);

    /* Initialize ID and defaults */
    dev->regs[0x00] = 0x57; /* 'W' */
    dev->regs[0x01] = 0x47; /* 'G' */
    dev->regs[0x02] = 0x10; /* revision */
    dev->xres       = 640;
    dev->yres       = 480;
    dev->bpp        = 8;
    dev->stride     = 640;
    dev->dac_pel_mask   = 0xff;
    dev->dac_write_index = dev->dac_read_index = dev->dac_step = 0;
    dev->engine_busy     = 0;
    timer_add(&dev->engine_timer, wingine_engine_timer, dev, 1);

    dev->log            = log_open("Wingine");
    return dev;
}

static void
wingine_close(void *priv)
{
    wingine_t *dev = (wingine_t *) priv;
    if (!dev)
        return;
    if (dev->vram) {
        free(dev->vram);
        dev->vram = NULL;
    }
    free(dev);
}

static void
wingine_reset(UNUSED(void *priv))
{
}

static void
wingine_speed_changed(UNUSED(void *priv))
{
}

static void
wingine_force_redraw(void *priv)
{
    wingine_t *dev = (wingine_t *) priv;
    wingine_present(dev);
}

const device_t wingine_onboard_device = {
    .name          = "Canon Wingine (On-Board)",
    .internal_name = "wingine_onboard",
    .flags         = 0,
    .local         = 0,
    .init          = wingine_init,
    .close         = wingine_close,
    .reset         = wingine_reset,
    .available     = NULL,
    .speed_changed = wingine_speed_changed,
    .force_redraw  = wingine_force_redraw,
    .config        = NULL
};

const device_t wingine_vlb_device = {
    .name          = "Canon Wingine VLB",
    .internal_name = "wingine_vlb",
    .flags         = DEVICE_VLB,
    .local         = 0,
    .init          = wingine_init,
    .close         = wingine_close,
    .reset         = wingine_reset,
    .available     = NULL,
    .speed_changed = wingine_speed_changed,
    .force_redraw  = wingine_force_redraw,
    .config        = NULL
};
