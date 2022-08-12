cmake_minimum_required(VERSION 3.10)
project(logiclone)

set(CMAKE_CXX_STANDARD 14)

find_package(PkgConfig REQUIRED)

add_executable(logiclone
        logiclone.cpp
        Configuration.cpp
        InputDevice.cpp InputDevice.h)

set_target_properties(logiclone PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
target_link_libraries(logiclone config++)

install(TARGETS logiclone DESTINATION bin)


pkg_check_modules(LIBCONFIG libconfig REQUIRED)



