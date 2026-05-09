---
aliases:
  - Endianness
  - byte order
tags:
  - flashcard/active/ass
  - COMP2611
---

# Endianness 
- Endianness refers to the **byte order** a data is stored in the memory.
- The "end" refers to the ending byte or least significant byte in normal human-written form
- For example, how exactly is the ordering of the data `0x0A0B0C0D` stored in the memory

# Big-Endian
- The "end" is stored at the biggest address in the sequence
- For example. To store `0x0A0B0C0D` on address `0x10`, `0x0D` would be stored in `0x13` and `0x0A` would be stored in `0x10`

# Little-Endian
- The reverse of Big-Endian. "end" is stored at the smallest address, the starting position of the address that stores the data
- Using the example presented above. `0x10` would be storing `0x0D` and `0x13` would be storing `0x0A`

