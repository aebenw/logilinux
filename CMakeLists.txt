cmake_minimum_required(VERSION 3.22)
set(CMAKE_INSTALL_PREFIX /usr)
project(logicopy)

set(CMAKE_CXX_STANDARD 14)

# https://cmake.org/cmake/help/latest/variable/CMAKE_EXPORT_COMPILE_COMMANDS.html
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src/logiclone)

