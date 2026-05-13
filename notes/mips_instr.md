---
aliases:
    - MIPs instruction
    - Assembly instructions
tags:
    - flashcard/active/ass
    - COMP2611
---

# Instructions
- Includes all the details of the MIPs instruction I have learnt in the course during classes and some self study

# Basic arithmetic operations
- `add $rd, $rs, $rt`
  - add `$rs` and `$rt`, result stored in `$rd`
  - Example: `add $t0, $s0, $t1`
  - `$t0 = $s0 + $t1` 

- `sub $rd, $rs, $rt`
  - subtract `$rs` by `$rt`, result stored in `$rd`

# Data transfer (between memory and registers)
- `lw $rt, c($rs)`
  - `$rt = Location(c + $rs)`
  - loads the content of `c + $rs`, basically an offset + base address stored in `$rs` to `$rt`
- `sw $rt, c($rs)`
  - `Location(c + $rs) = $rt`
  - store `$rt` to a specific memory location - `c + $rs`

