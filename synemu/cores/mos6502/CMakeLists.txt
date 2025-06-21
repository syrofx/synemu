add_library(mos6502 STATIC mos6502.cpp)
target_include_directories(mos6502 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(mos6502 PRIVATE spl)
