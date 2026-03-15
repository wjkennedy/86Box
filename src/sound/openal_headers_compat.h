// Compatibility includes for core OpenAL headers across platforms
#pragma once

#if __has_include(<AL/al.h>)
#  include <AL/al.h>
#  include <AL/alc.h>
#elif __has_include(<OpenAL/al.h>)
#  include <OpenAL/al.h>
#  include <OpenAL/alc.h>
#else
#  error "OpenAL headers not found. Install OpenAL Soft or Xcode OpenAL."
#endif

