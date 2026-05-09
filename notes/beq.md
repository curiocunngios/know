---
aliases:
    - beq
    - branch if equal
    - beq implementation
    - beq circuit implementation 
tags:
    - flashcard/active/ass
    - COMP2611
---

# beq 
- branch if equal
- e.g. `beq $t0, $t1, <address>`
- branches to the constant label or branch address if `$rs == $rt` by setting `PC = PC + 4 + address` 

# beq circuit implementation
- `beq $t0, $t1, L`
- just use the adder of the ALU to do a subtraction of `$t0` and `$t1` and check if the result of all the 1 bit ALU for each bit is 0 by adding an `OR` gate and `NOT` gate at the end
- the logic is that if either one of the bit is 1 but not 0, the entire result is definitely not 0 and thus do not branch (`NOT` gate)