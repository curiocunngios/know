---
aliases:
    - Control 
    - Control Unit
    - CPU control
    - control src
tags:
    - flashcard/active/ass
    - COMP2611
---

# ALU Src
## flow
- pass the 6 bits opcode (instr[31-26]) to the big control unit
- the big control unit produces a 2 bit ALUOp to ALUSrc to classify the operation (I-type, branch, R-type)
- provide the 6-bits funct field additionally to ALUSrc to completely identity the R-type instructions
- then, the following truth table would be produced
![alt text](attachments/image-23.png)
- after further simplifications (some bits are not critical and can be ignored):
![alt text](attachments/image-24.png)
- a simple circuit of ALUSrc
![alt text](attachments/image-25.png)
- the technique used here is called the two-level decoding:
  - instead of using one big unit and passing 12 bits to identify the instruction, which takes $2^{12}$ combinations and would produce a large circuit
  - first classify them into different types with the 6 bits opcode $2^6$
  - then produces 2 bit ALUop to be combined with funct field and makes a compact truth table $2^6 + 2^8$


# Control unit
- Based on the instruction type (R-type, I-type, branch, etc.), provide different control signal to mainly the MUX to choose the correct data to use or correct path. 
- Or provide correct signal to register file or memory unit to prevent or allow a certain memory read/write
- Here are some of the control signals
  - `Regdst`: decide whether to choose `$rd` (R-type) or repeat `$rt` (I-type)
  - `Branch`: This signal is enabled (1) on branch instructions, otherwise disabled (0) to prevent any sort of branch (there's an `AND` gate taking both this signal and the result of the ALU that calculates whether the value in the reigster that equal) 
  - `MemRead`: disabled on R-type and sw, etc. to prevent reading the result from the memory unit.
  - `MemtoReg`: decide between choosing directly the ALU result (R-type, `add`, `sub`, etc.) or result read from the memory (`lw`, etc.)
  - `ALUOp`: code for ALUSrc to classify and identify the instructions
  - `MemWrite`: passed to memory unit/block to prevent any sort of write to the memory on e.g. R-type, branch, lw instructions, etc. 
  - `ALUSrc`: the signal passed to a specific MUX to choose between whether choosing value from register read (R-type) or sign extended constant value (I) before going into the main ALU unit
  - `RegWrite`: Disabled (0) on branch, sw, etc. to prevent any sort of register overwrite
  - `Zero`: this is a signal not coming from the big control unit, but from the main ALU unit. It is set based on whether two register values are equal by subtraction and indicates whether to branch or not branch. Passed to an `AND` gate together with `Branch` signal from the big control unit

- after all, we get the following truth table:
![alt text](attachments/image-26.png)
- and the following simple circuit
![alt text](attachments/image-27.png)