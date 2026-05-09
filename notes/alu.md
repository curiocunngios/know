---
aliases:
    - ALU
    - Arithmetic Logical Unit
tags:
    - flashcard/active/ass
---

# ALU
- a component in the CPU
- responsible for arithmetic and logical operations
- for example: calculating `1 + 1 = 2`
- made of:
  - `AND` gate
  - `OR` gate
  - an adder
  - a binvert unit
    - to invert the bits
    - combining with an additional "carryin" bit, basically adding a 1, would retrive the 2's complement representation of the number
      - since 2's complement is basically inverting all the bits: 0 turns to 1, 1 turns to 0, then add 1
    - the exact use of this unit, is to "perform subtraction by addition" `A - B` -> `A + (-B)`
  - or a bnegate (combination of binvert and carryin bit) 
  - and potentially more things especially in advanced ALU

![alt text](attachments/image-17.png)
- above is a simple example of a rough 1 bit ALU
- and 32-bit ALU is composed of 32 many 1 bit ALU to do bitwise arithmetic or logical operations on the binary number. Operations is chosen by the mux inside the ALUs
- the "carry-in" on the very first ALU (the least significant bit) is typically not necessary or set to 0 during addition but 1 during a subtraction (to make it a negative 2's complement form)
- the "carry-out" is passed to the next ALU unit
- additional information:
  - in a 32-bit ALU, the ALU at the most significant bit i.e. the 31st ALU unit should have an overflow detecter (a simple circuit with made from a simple truth table to be discussed later)
  - that overflow detector should receives the following as input:
    - both the operands `a, b` in for example `a + b` 
    - result of the binvert unit so that it knows what operation it is, e.g. whether it is a subtraction or addition
    - sum-out (the result)
    - carry-out (for unsigned overflow detection, I have the idea but exactly how it works I am not sure)
- the rough illustration of a 32-bit ALU
![alt text](attachments/image-18.png)

