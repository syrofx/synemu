add_library(chip-8 STATIC chip-8.cpp)
target_include_directories(chip-8 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(chip-8 PRIVATE spl)
