add_library(z80 STATIC z80.cpp)
target_include_directories(z80 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(z80 PRIVATE spl)
