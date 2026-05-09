---
aliases:
    - Dathpath
tags:
    - flashcard/active/ass
    - COMP2611
---

# Datapath
- Units that process data and addresses in the CPU 
- For example, the registers, memories, ALU, multiplexers

## Instruction fetch
- the datapath for instruction fetch:
![alt text](attachments/image-19.png)

## R-type
- flow:
  - read 2 registers
  - perform arithmetic operations
    - e.g. adding values from 2 registers
  - write to destination register
## Rough datapath for R-type:
![alt text](attachments/image-20.png)

## I-type
- flow:
  - read base register operand
  - sign-extend the 16 bit constant to 32-bit and add that with the base address 
  - Load: read memory and update register
  - Store: Write register value to memory
## Rough datapath for I-type:
![alt text](attachments/image-21.png)

## I-type branch 
- Read register operands
- ALU compares the operands and decide whether to branch or not branch
  - by subtraction and checking the Zero output
  - Calculate branch target address with PC-relative addressing

## Dathpath for typical I-type branch instructions
![alt text](attachments/image-22.png)