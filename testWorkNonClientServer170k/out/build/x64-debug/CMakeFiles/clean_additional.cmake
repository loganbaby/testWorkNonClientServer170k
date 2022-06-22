# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "testWorkNonClientServer170k\\CMakeFiles\\testWorkNonClientServer170k_autogen.dir\\AutogenUsed.txt"
  "testWorkNonClientServer170k\\CMakeFiles\\testWorkNonClientServer170k_autogen.dir\\ParseCache.txt"
  "testWorkNonClientServer170k\\testWorkNonClientServer170k_autogen"
  )
endif()
