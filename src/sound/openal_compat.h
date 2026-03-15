// Compatibility include for OpenAL extension header across platforms
// Prefer OpenAL Soft style first, then Apple framework; if neither
// exists, build will proceed without extensions.
#pragma once

#if __has_include(<AL/alext.h>)
#  include <AL/alext.h>
#elif __has_include(<OpenAL/alext.h>)
#  include <OpenAL/alext.h>
#endif
