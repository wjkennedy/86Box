/********************************************************************************
** Form generated from reading UI file 'qt_settingsfloppycdrom.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SETTINGSFLOPPYCDROM_H
#define UI_QT_SETTINGSFLOPPYCDROM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsFloppyCDROM
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidgetFloppyCDROM;
    QWidget *tabFloppy;
    QVBoxLayout *verticalLayoutFloppy;
    QTableView *tableViewFloppy;
    QWidget *floppyControls;
    QGridLayout *floppyLayout;
    QLabel *labelFloppyType;
    QComboBox *comboBoxFloppyType;
    QCheckBox *checkBoxTurboTimings;
    QCheckBox *checkBoxCheckBPB;
    QLabel *labelFloppyAudio;
    QComboBox *comboBoxFloppyAudio;
    QWidget *tabCDROM;
    QVBoxLayout *verticalLayoutCDROM;
    QTableView *tableViewCDROM;
    QWidget *cdControls;
    QGridLayout *gridLayout;
    QLabel *labelBus;
    QComboBox *comboBoxBus;
    QLabel *labelChannel;
    QComboBox *comboBoxChannel;
    QLabel *labelSpeed;
    QComboBox *comboBoxSpeed;
    QLabel *labelCDROMType;
    QComboBox *comboBoxCDROMType;

    void setupUi(QWidget *SettingsFloppyCDROM)
    {
        if (SettingsFloppyCDROM->objectName().isEmpty())
            SettingsFloppyCDROM->setObjectName(QString::fromUtf8("SettingsFloppyCDROM"));
        SettingsFloppyCDROM->resize(544, 363);
        verticalLayout = new QVBoxLayout(SettingsFloppyCDROM);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidgetFloppyCDROM = new QTabWidget(SettingsFloppyCDROM);
        tabWidgetFloppyCDROM->setObjectName(QString::fromUtf8("tabWidgetFloppyCDROM"));
        tabFloppy = new QWidget();
        tabFloppy->setObjectName(QString::fromUtf8("tabFloppy"));
        verticalLayoutFloppy = new QVBoxLayout(tabFloppy);
        verticalLayoutFloppy->setObjectName(QString::fromUtf8("verticalLayoutFloppy"));
        tableViewFloppy = new QTableView(tabFloppy);
        tableViewFloppy->setObjectName(QString::fromUtf8("tableViewFloppy"));
        tableViewFloppy->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewFloppy->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewFloppy->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewFloppy->setTabKeyNavigation(false);
        tableViewFloppy->setShowGrid(false);
        tableViewFloppy->verticalHeader()->setVisible(false);

        verticalLayoutFloppy->addWidget(tableViewFloppy);

        floppyControls = new QWidget(tabFloppy);
        floppyControls->setObjectName(QString::fromUtf8("floppyControls"));
        floppyLayout = new QGridLayout(floppyControls);
        floppyLayout->setObjectName(QString::fromUtf8("floppyLayout"));
        labelFloppyType = new QLabel(floppyControls);
        labelFloppyType->setObjectName(QString::fromUtf8("labelFloppyType"));

        floppyLayout->addWidget(labelFloppyType, 0, 0, 1, 1);

        comboBoxFloppyType = new QComboBox(floppyControls);
        comboBoxFloppyType->setObjectName(QString::fromUtf8("comboBoxFloppyType"));
        comboBoxFloppyType->setMaxVisibleItems(30);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxFloppyType->sizePolicy().hasHeightForWidth());
        comboBoxFloppyType->setSizePolicy(sizePolicy);

        floppyLayout->addWidget(comboBoxFloppyType, 0, 1, 1, 1);

        checkBoxTurboTimings = new QCheckBox(floppyControls);
        checkBoxTurboTimings->setObjectName(QString::fromUtf8("checkBoxTurboTimings"));

        floppyLayout->addWidget(checkBoxTurboTimings, 0, 2, 1, 1);

        checkBoxCheckBPB = new QCheckBox(floppyControls);
        checkBoxCheckBPB->setObjectName(QString::fromUtf8("checkBoxCheckBPB"));

        floppyLayout->addWidget(checkBoxCheckBPB, 0, 3, 1, 1);

        labelFloppyAudio = new QLabel(floppyControls);
        labelFloppyAudio->setObjectName(QString::fromUtf8("labelFloppyAudio"));

        floppyLayout->addWidget(labelFloppyAudio, 1, 0, 1, 1);

        comboBoxFloppyAudio = new QComboBox(floppyControls);
        comboBoxFloppyAudio->setObjectName(QString::fromUtf8("comboBoxFloppyAudio"));
        comboBoxFloppyAudio->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxFloppyAudio->sizePolicy().hasHeightForWidth());
        comboBoxFloppyAudio->setSizePolicy(sizePolicy);

        floppyLayout->addWidget(comboBoxFloppyAudio, 1, 1, 1, 3);


        verticalLayoutFloppy->addWidget(floppyControls);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/settings/qt/icons/floppy_tab.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetFloppyCDROM->addTab(tabFloppy, icon, QString());
        tabCDROM = new QWidget();
        tabCDROM->setObjectName(QString::fromUtf8("tabCDROM"));
        verticalLayoutCDROM = new QVBoxLayout(tabCDROM);
        verticalLayoutCDROM->setObjectName(QString::fromUtf8("verticalLayoutCDROM"));
        tableViewCDROM = new QTableView(tabCDROM);
        tableViewCDROM->setObjectName(QString::fromUtf8("tableViewCDROM"));
        tableViewCDROM->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewCDROM->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewCDROM->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewCDROM->setTabKeyNavigation(false);
        tableViewCDROM->setShowGrid(false);
        tableViewCDROM->verticalHeader()->setVisible(false);

        verticalLayoutCDROM->addWidget(tableViewCDROM);

        cdControls = new QWidget(tabCDROM);
        cdControls->setObjectName(QString::fromUtf8("cdControls"));
        gridLayout = new QGridLayout(cdControls);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelBus = new QLabel(cdControls);
        labelBus->setObjectName(QString::fromUtf8("labelBus"));

        gridLayout->addWidget(labelBus, 0, 0, 1, 1);

        comboBoxBus = new QComboBox(cdControls);
        comboBoxBus->setObjectName(QString::fromUtf8("comboBoxBus"));
        comboBoxBus->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxBus->sizePolicy().hasHeightForWidth());
        comboBoxBus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxBus, 0, 1, 1, 1);

        labelChannel = new QLabel(cdControls);
        labelChannel->setObjectName(QString::fromUtf8("labelChannel"));

        gridLayout->addWidget(labelChannel, 0, 2, 1, 1);

        comboBoxChannel = new QComboBox(cdControls);
        comboBoxChannel->setObjectName(QString::fromUtf8("comboBoxChannel"));
        comboBoxChannel->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxChannel->sizePolicy().hasHeightForWidth());
        comboBoxChannel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxChannel, 0, 3, 1, 1);

        labelSpeed = new QLabel(cdControls);
        labelSpeed->setObjectName(QString::fromUtf8("labelSpeed"));

        gridLayout->addWidget(labelSpeed, 0, 4, 1, 1);

        comboBoxSpeed = new QComboBox(cdControls);
        comboBoxSpeed->setObjectName(QString::fromUtf8("comboBoxSpeed"));
        comboBoxSpeed->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxSpeed->sizePolicy().hasHeightForWidth());
        comboBoxSpeed->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxSpeed, 0, 5, 1, 1);

        labelCDROMType = new QLabel(cdControls);
        labelCDROMType->setObjectName(QString::fromUtf8("labelCDROMType"));

        gridLayout->addWidget(labelCDROMType, 1, 0, 1, 1);

        comboBoxCDROMType = new QComboBox(cdControls);
        comboBoxCDROMType->setObjectName(QString::fromUtf8("comboBoxCDROMType"));
        comboBoxCDROMType->setMaxVisibleItems(30);
        sizePolicy.setHeightForWidth(comboBoxCDROMType->sizePolicy().hasHeightForWidth());
        comboBoxCDROMType->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxCDROMType, 1, 1, 1, 5);


        verticalLayoutCDROM->addWidget(cdControls);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/settings/qt/icons/cdrom.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetFloppyCDROM->addTab(tabCDROM, icon1, QString());

        verticalLayout->addWidget(tabWidgetFloppyCDROM);

        QWidget::setTabOrder(tableViewFloppy, comboBoxFloppyType);
        QWidget::setTabOrder(comboBoxFloppyType, checkBoxTurboTimings);
        QWidget::setTabOrder(checkBoxTurboTimings, checkBoxCheckBPB);
        QWidget::setTabOrder(checkBoxCheckBPB, comboBoxFloppyAudio);
        QWidget::setTabOrder(comboBoxFloppyAudio, tableViewCDROM);
        QWidget::setTabOrder(tableViewCDROM, comboBoxBus);
        QWidget::setTabOrder(comboBoxBus, comboBoxChannel);
        QWidget::setTabOrder(comboBoxChannel, comboBoxSpeed);
        QWidget::setTabOrder(comboBoxSpeed, comboBoxCDROMType);

        retranslateUi(SettingsFloppyCDROM);

        tabWidgetFloppyCDROM->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsFloppyCDROM);
    } // setupUi

    void retranslateUi(QWidget *SettingsFloppyCDROM)
    {
        SettingsFloppyCDROM->setWindowTitle(QCoreApplication::translate("SettingsFloppyCDROM", "Form", nullptr));
        labelFloppyType->setText(QCoreApplication::translate("SettingsFloppyCDROM", "Type:", nullptr));
        checkBoxTurboTimings->setText(QCoreApplication::translate("SettingsFloppyCDROM", "Turbo timings", nullptr));
        checkBoxCheckBPB->setText(QCoreApplication::translate("SettingsFloppyCDROM", "Check BPB", nullptr));
        labelFloppyAudio->setText(QCoreApplication::translate("SettingsFloppyCDROM", "Audio:", nullptr));
        tabWidgetFloppyCDROM->setTabText(tabWidgetFloppyCDROM->indexOf(tabFloppy), QCoreApplication::translate("SettingsFloppyCDROM", "Floppy drives", nullptr));
        labelBus->setText(QCoreApplication::translate("SettingsFloppyCDROM", "Bus:", nullptr));
        labelChannel->setText(QCoreApplication::translate("SettingsFloppyCDROM", "Channel:", nullptr));
        labelSpeed->setText(QCoreApplication::translate("SettingsFloppyCDROM", "Speed:", nullptr));
        labelCDROMType->setText(QCoreApplication::translate("SettingsFloppyCDROM", "Type:", nullptr));
        tabWidgetFloppyCDROM->setTabText(tabWidgetFloppyCDROM->indexOf(tabCDROM), QCoreApplication::translate("SettingsFloppyCDROM", "CD-ROM drives", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsFloppyCDROM: public Ui_SettingsFloppyCDROM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SETTINGSFLOPPYCDROM_H
