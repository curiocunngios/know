---
aliases:
    - instruction encoding
    - MIPs instruction encoding
tags:
    - flashcard/active/ass
    - COMP2611
---

# Instruction Encoding
- The following shows how a specific instruction, e.g. `add $t0, $s0, $t1` is encoded into machine code i.e. a specific binary sequence
- Different types of instruction are encoded differently. The following explains R-type and I-type and J-type instructions.

# R-type
- the ordering of the machine code is as follow:
- it's always 32-bit

|op|rs|rt|rd|shamt|funct|
|-|-|-|-|-|-|
|6|5|5|5|5|6|
- the ordering of the corresponding assembly instructions is most probably the following for human readability (not confirmed)

|\<operation\>|rd|rs|rt|
|-|-|-|-|

- `op` is the operation code as known as the opcode
  - used to classify instrucitons
    - for example, R-type shares the same opcode `000000` (false
      - this is false. Checking the green sheet again, I found out that:
      - `Move From Control mfc0 R R[rd] = CR[rs] 10 /0/--/0` is a R type instruction but it has the opcode 10
- `rs` is the first register operand
  - the first source register 
  - stands for: "register source"
- `rt` is the second register operand
  - the second source register 
  - `rt` does not "stand for" anything
  - named `rt` simply because `t` is the letter right after `s` so it represent being the second
- `rd` is the destination register
  - where the result of the operation would go
  - most probably stand for "register destination"
- `shamt` is the shift amount
  - tells how much to left shift or right shift
  - is a constant
- `funct` is the function field
  - combining with the opcode, the decoder knows exactly what instruction it is referring to.

# I-type
- For immediate (constant) arithmetic and load/store instructions
- the ordering of the machine code is as follow:
- it's always 32-bit

|op|rs|rt|immediate|
|-|-|-|-|
|6|5|5|16|

- `op`: same as R-type
- `rs`: base register
  - stores the base address 
  - assembly instruction order:
    - further away from the operator
- `rt`: 
  - can be either register source (`sw`) or destination register (`lw`/`addi`)
  - assembly instruction ordering:
    - closer to the operator 
- `immediate`:
  - a constant sometimes (or always? not sure) added with the value of the base register `rs`


# J type
- The J type instructions encoding format is for jump instructions. See [jump](./jump.md)

