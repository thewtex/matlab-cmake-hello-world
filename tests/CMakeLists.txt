add_library(hello SHARED hello.c)
add_library(hellocpp SHARED hellocpp.cpp)
install(TARGETS hello hellocpp 
  DESTINATION ${CMAKE_INSTALL_PREFIX})
