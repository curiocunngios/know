---
aliases:
    - jump instruction MIPS
    - jump instruction MIPS inplementation
    - jump instruction MIPS inplementation datapath design
tags:
    - flashcard/active/ass
    - COMP2611
---

# The jump instruction
- jump (`j <addr>`)
- encoding is:

|`0x02` (opcode)|`<address>`|
|-|-|
|31:26|25:0|

- the update PC with concatenation of:
  - Top 4 bits of the old (previous) PC
  - 26 bits address in the encoding
  - 2 last bits of $00_{2}$
- to implement this in the datapath
  - need extra control signal decoded from the opcode (0x2)
- the datapath roughly looks like the following:

![alt text](attachments/image-33.png)

- first, 25:0 gets passed to a unit that **left shifts** it to 28 bits (adding two 00 at the end)
- the resulting 28 bits binary value gets concatenated with the first the top 4 bits `[31:28]` of PC + 4
- now it becomes a full 32 bit address, the actual jump target
- it then gets passed to a MUX that chooses between the **jump target** or **PC + 4**
- that MUX is determined by a the `jmp` signal from the big control unit. The `jmp` signal is enabled if the opcode of the instruction `[31:26]` is $000010_{2}$ which is `0x02` the jump instruction.