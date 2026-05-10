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

# mult instructions
- there are:
  - `mult` (multiply)
  - `multu` (multiply unsigned)
- the multiplication of two 32-bit number yields a 64-bit number
- A pair of registers, `Hi` and `Lo` are used to store the product
- The **high 32 bits** are stored in `Hi`
- the **low 32 bits** are stored in `Lo`

## more details
- `mult` 
  - Example: `mult $rs, $rt`
    - `Hi, Lo` = `$rs x $rt`, treat `$rs`, `$rt` as signed.
- `multu`
  - Example: `multu $rs, $rt`
  - `Hi, Lo` = `$rs x $rt`, treat `$rs`, `$rt` as unsigned.
- Both are R-type
- both ignore overflow, it is up to the software to check and see if the product is too big to fit 32-bit

### fetch the 32-bit product
- `mflo` (move from Lo)
  - e.g. `mflo $s1`: `$s1 = Lo` 
- `mfhi` (move from Hi)
  - e.g. `mflo $s1`: `$s1 = Hi` 
- If the prodcut is known to be able to fit in 32-bit, we can just retrieve the `Lo`
- `mfhi` are usually used to transfer `Hi` to a general purpose register to test for overflow

### Unsigned overflow detection
- Product is too large to fit in a 32-bit unsigned word
- There is no overflow if `Hi` is equal to 0
- The following code checks for the overflow
```assembly
multu $t0, $t1
mfhi $t2
beq $0, $t2, no_overflow
j overflow_detected
no_overflow:
```

### Signed overflow detection
- There is no overflow if every bit in `Hi` is same as the sign bit of `Lo`
- before we talk about that, we need to talk about the instruction: `sra` (shift right arithmetic)
  - `sra $rd, $rt, shamt`
  - `R[rd] = R[rt] >> shamt`
  - R-type instruction
  - different from `srl`, it does not fill the left bits with 0
  - it fills the left bits with exactly the sign bit of the original most significant bit before shifting
  - ![alt text](attachments/image-32.png)
- `sra` is used to obtain a register filled with the correct sign bit of the original binary number
- the detection code would then be:
```assembly
mult $t0, $t1
mflo $t0
mfhi $at
sra $t1, $t0, 31
beq $at, $t1, no_overflow
j overflow_detected
no_overflow:
```