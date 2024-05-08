# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/ThreadedServer_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ThreadedServer_autogen.dir/ParseCache.txt"
  "ThreadedServer_autogen"
  )
endif()
