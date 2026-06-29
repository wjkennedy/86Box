# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "src/qt/CMakeFiles/plat_autogen.dir/AutogenUsed.txt"
  "src/qt/CMakeFiles/plat_autogen.dir/ParseCache.txt"
  "src/qt/CMakeFiles/ui_autogen.dir/AutogenUsed.txt"
  "src/qt/CMakeFiles/ui_autogen.dir/ParseCache.txt"
  "src/qt/plat_autogen"
  "src/qt/ui_autogen"
  )
endif()
