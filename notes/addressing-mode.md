---
aliases:
    - addressing mode
tags:
    - flashcard/active/ass
    - COMP2611
---

# Addressing mode
- To know where to find data and instructions

# To find data
## Immediate addressing
- provide a direct constant
- example: `addi $t0, $0, 5`

## Register addressing
- values are simply in the register
- example: `add $t0, $t0, $t0`

## Base addressing
- operand being the sum of a base register and an offset from that base
- example: `lw $t0, 0($s0)`

# To find instructions 
- mostly used for branch and jump instructions

## PC-relative addressing
- used for conditional branch instructions like `beq`, `bne`, which are I-type instructions
- the constant field of I-type instructions can only hold 16-bit addresses
## flow
- simply add the branch offset (maximum value is $2^15$) to `PC + 4`
- basically `PC + 4 + <offset>`
- the branch offset `<offset>` is described in `words`. 
  - Basically it is the "count" of instructions away from the current instruction.
  - Which means in the [datapath](./datapath.md) there needs to be a small unit to shift the bits to the left by 2 digits (times 4)
  - Which also means the actual range is basically `<offset> * 4` 
- the offset can be a negative 2's complement form so branching **before** or **after** the current instruction is possible. 
  - but the range is a little different because of 2's complement's range limit: $-[2^{k - 1} - 2^{k - 1} - 1]$
- this is good enough since conditional branches tend to branch to a nearby location e.g. a loop

## Pseudo-direct addressing
- used for J-type instructions
  - with 6 bits of opcode and 26 bits of address
- for example, `j` (jump) and `jal` (jump and link)
- it's "pseudo" since an actual direct address is not possible. Because the address field is only 26 bits. 32-bit addresses cannot be embedded
  - But some bits can be ignored. Specifically the last 2 bits since they are always $00_{2}$ because all of the instructions are 4 bytes so the addresses are also 4-byte aligned. i.e. it either ends with `0x0` ($0000_2$), `0x4`($0100_2$), `0x8` ($1000_2$), `0xc` ($1100_2$). So, we can see that all the possibilities are ending with 00 in binary
  - therefore 2 bits can be ignored
  - only 30 bits needs to be stored

## flow
- keep the first 4 bits constant (a single hex number)
- therefore 26 bits (`word` counter) is exactly enough to jump to within a range of $2^{28}$ bits which is 256 megabits (Mb)
- which means the range is roughly `0xX0000000 - 0xXFFFFFFC`

## To branch to an arbitrary address
- store the arbitrary 32-bit address in a register and use `jr $register`


