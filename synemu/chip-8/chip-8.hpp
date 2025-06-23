#pragma once

#include "../spl/types.hpp"

#include <string_view>
#include <functional>
#include <array>
#include <map>

namespace chip8 {
  struct Chip8 {
    Chip8();

    void tick();
    void createInstructionTable();
    void isKeyDown(const u8& key);
    void load(const std::string_view& romPath);

    u8 screen[2048];
    std::array<u8, 16> v;
    std::array<u8, 16> keys;
    std::array<u8, 80> font;
    std::array<u16, 16> stack;
    std::array<u8, 4096> memory;

    std::map<u16, std::function<void()>> instructionTable;

    u16 i;
    u16 sp;
    u16 pc;
    u16 opcode;

    u8 delayTimer;
    u8 soundTimer;
  };
}
