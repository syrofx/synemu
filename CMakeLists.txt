cmake_minimum_required(VERSION 3.20)
project(synemu-main LANGUAGES CXX)

message("Setting C++ compiler options")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
   message("GNU/Clang compiler detected, enabling warnings...")
   add_compile_options(
       -Wall
       -Wextra
       -Wconversion
       -Wsign-conversion
       -Wshadow
       -Wnon-virtual-dtor
       -Wold-style-cast
       -Woverloaded-virtual
       -Wdouble-promotion
       -Wformat=2
   )
elseif(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    add_compile_options(/W4 /permissive-)
endif()

add_subdirectory(spl)
add_subdirectory(synemu)

add_executable(${CMAKE_PROJECT_NAME} main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE spl synemu)
