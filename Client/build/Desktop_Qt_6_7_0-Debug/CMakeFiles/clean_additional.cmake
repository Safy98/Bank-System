# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/TestClient_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/TestClient_autogen.dir/ParseCache.txt"
  "TestClient_autogen"
  )
endif()
