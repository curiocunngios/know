---
aliases:
    - function call
    - function call in mips
    - function call procedure mips
tags:
    - flashcard/active/ass
    - COMP2611
---

# Function call mips
- function call is mips is done using `jal <label>` and return using `jr $ra`

## Setup
- here are the registers that are usually involved in a function call in MIPs
  - `$a0 - $a3`: first 4 function arguments
    - the 5th and beyond arguments are saved on the stack. Specifically the 5th should be by convention stored in `$sp+16` and so on. (Not confirmed). Here is the [source](https://stackoverflow.com/questions/50011688/how-do-i-add-more-than-4-arguments-to-a-function-in-mips) 
  - `$v0 - $v1` stores the return value of a function
    - it is said to be possible to return more than two values from a function. Here is the [source](https://cim.mcgill.ca/~langer/273/11-notes.pdf)
    - but specifically how? idk
  - `$ra` is the "return address"
    - it would be overwritten with the address of the instruction following `jal <label>` (right below) after executing `jal`
    - so when doing nested function call. We have to save `$ra` on the stack by "push"
      - more on this: the number of pushes have to be balanced (the same) with the number of pop (retriving the value). Otherwise the stack would be miss aligned and incorrect values might be passed to unintended registers or memory locations.
  - `PC`: Program Counter
    - stores the address of the current instruction
    - updated with next instruction immediately after current instruction finished executing
    - it's probably the equivalent of `$rip` in `x86-64`
## more conventions
- registers which value to be preserved on call:
  - `$s0 - $s7`
  - `$ra`
  - `$sp` (stack pointer)
  - `$fp` (frame pointer)
  - `$gp` (pointer to the global area)
