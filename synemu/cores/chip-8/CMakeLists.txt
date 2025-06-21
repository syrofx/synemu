add_library(chip8 STATIC chip-8.cpp)
target_include_directories(chip8 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(chip8 PRIVATE spl)
