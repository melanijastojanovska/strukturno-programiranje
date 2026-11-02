   cmake_minimum_required(VERSION 3.20)
   project(auditoriski2)

   set(CMAKE_CXX_STANDARD 20)


   file(GLOB SOURCES CONFIGURE_DEPENDS "*.cpp")
   foreach (src ${SOURCES})
       get_filename_component(name ${src} NAME_WE)
       add_executable(${name} ${src})
   endforeach ()
   