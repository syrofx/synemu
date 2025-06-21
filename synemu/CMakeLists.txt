add_subdirectory(cores)
add_subdirectory(nes)

add_library(synemu INTERFACE)

target_link_libraries(synemu
  INTERFACE
    chip8
    mos6502
    z80
    nes
    spl
)
