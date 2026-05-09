---
aliases:
    - division 
    - division internal logic
    - division implementations 
tags:
    - flashcard/active/ass
    - COMP2611
---

# Division
- core ideas:
  - subtraction (binary numbers)
    - between the divisor and dividend
    - if the result is non-negative, set the corresponding quotient bit to be 1
  - shifting
    - similar to multiplication
    - shift divisor or dividend 1 bit by 1 bit and do subtraction

## Easy version (4 bit)
- store the 4-bit divisor in the higher 4 bits of an 8-bit register and fill the lower 4 bits to be 0
- store 4-bit dividend in 8-bit register and fill higher 4 bits to be 0 
- keep shifting the divisor to the right and attempt subtraction
- if subtraction result is non-negative
  - set corresponding quotient bit to be 1
  - Otherwise, set it to be 0
- continue the algorithm not on the dividend but on the remainder of the subtraction above

## Optimized 
- don't shift the divisor, just store it on a 4-bit register and keep it as constant
- use an 8-bit register to store the dividend and future quotient
- original setup is to have the higher 4 bits as 0: `0000` and the lower 4 bits as the dividend
- then, shift the dividend to left to match the dividend with divisor and do subtraction, build quotient at the lower 4 bit

