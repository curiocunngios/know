---
aliases:
    - execution of instructions
    - instruction execution
    - instruction execution flow
tags:
    - flashcard/active/ass
    - COMP2611
---

# Execution flow
1. Fetch
   - get the instruction encodings from the memory
2. Decode
   - from opcode and funct field (R-type), identify the exact instruction. Registers used would be decided with the decoders in the register file
3. Execute
   - perform the instruction with a combination of ALU, MUX, etc.
4. Write
   - write the result to destination register or a certain memory address y