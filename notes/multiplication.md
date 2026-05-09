---
aliases:
    - multiplication 
    - multiplication internal logic
    - multiplication implementations 
tags:
    - flashcard/active/ass
    - COMP2611
---

# multiplication
- basically only 2 operations are needed for implementating multiplication:
  - addition 
  - shifting
- the multiplication algorithm is simply:
  - multiplicand (the upper one) accumulates the sum whenever the multiplier (bottom one)'s digit is 1
  - when we move forward to the next digit (ten's position, hundred's position)
    - we do almost the same but the multiplicand accumulated with itself being left shifted by a certain amount of digits to the left
      - if it's ten's position shift by 1 to the left
      - hundreds then shift by 2 digits to the left
      - and so on
  - by accummulates it's simply addition

## Example
- imagine 2 4-bit binary number being multiplied together
1. initialize Product in a 4 + 4= 8-bit register as `0000 0000`
2. store the multiplicand in a 8-bit register e.g. value = `0000 1000` (the left most 4 digits `0000` are "spaces" for the future left shift
3. store multiplier in a 4-bit register
4. Iterate the following:
   - if right most bit of multiplier is 1
   - add the product with multiplicand
   - shift the multiplier to the right by 1 digit (preparation for the next iteration)
   - shift the multiplicand to the left by 1 digit (preparation for the next iteration) 
   - repeat until all 4 bits of the multiplier become 0 (repeat at most 4 times in this case)

## Improvement
- however, the above method is not efficient as we are using an 8-bit register to store the 4-bit multiplicand
- high level idea of the optimized version:
  - use 4-bit register to store 4-bit multiplicand
  - never shift multiplicand
  - instead, by default only use the upper 4 bits of the Product to accumulate the mutiplicand
    - shift the intermediate result of the product (the entire value stored in Product) to the right in each round (only 4 rounds here the lower 4 bits have to all be shifted away)
    - this will align the multiplicand, which is a constant 4-bit value, to fall into the correct position in the Product after all the shifting is done.
    - basically shifting it's just shifting the entire intermediate product value to the right and only add the upper 4 bits with the constant multiplicand
    - this basically "increases the value" of the multiplicand
    - since the lower 4 bits have to all be shifted away and is entirely meaningless. And at the same time the at-most-4-bit multiplier also have to be left-shifted in each round. 
    - Therefore, we can save even more space by storing the multiplier at the lower 4-bit of the Product
