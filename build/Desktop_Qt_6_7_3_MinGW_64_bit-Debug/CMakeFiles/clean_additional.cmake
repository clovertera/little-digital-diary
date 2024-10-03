# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\little-digital-diary_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\little-digital-diary_autogen.dir\\ParseCache.txt"
  "little-digital-diary_autogen"
  )
endif()
