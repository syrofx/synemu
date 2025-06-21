add_library(nes STATIC nes.cpp)
target_include_directories(nes PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(nes PRIVATE spl)
