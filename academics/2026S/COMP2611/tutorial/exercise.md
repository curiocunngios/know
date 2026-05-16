# rough notes for doing the exercises
- Write down the corresponding MIPS machine code (in binary) of the instructions
  - `add $s0, $s1, $t2`
  - `000000 10001 01010 10000 00000 100000`

  - `lw $s0, 16($t0)`
  - `100011 01000 10000 0000 0000 0001 0000`

- Write down the shortest sequence (any one) of MIPS instructions for the following C++ code, assuming variable a and b are stored in `$s0` and `$s1` respectively. You can use some registers for storing temporary values
  - `b = a + 0x37cf0010`
```
lui $t0, 0x37cf 
ori $t0, $t0, 0x0010 # can also use addi right here. Because the MSB is 0, addi sign extends it. No problem
add $s1, $s0, $t0
```
  - `b = a + 0x37cff346`
```
lui $t0, 0x37cf 
ori $t0, $t0, 0xf346 # cannot use addi here because the MSB is 1, sign-extending it would make it 0xfffff346, adding with 0x37cf0000 gives a completely different value than 0x37cff346
# a logic of using addi seems to make sense still, the problem is probably it contradicts with the lui which zero extends 2 bytes of 0 on the right hand side
add $s1, $s0, $t0
```

- translate the following C++ function into a MIPS function, using the registers `$a0` and `$a1` for its parameters and the register `$v0` for its return return

```assembly
equal:
beq $a0, $a1, return1

return0:
add $v0, $zero, $zero
jr $ra

return1:
addi $v0, $zero, 1
jr $ra
```

- Write down the MIPS code segment that make the following call to the C++ function in the previous exercise, assumign the varaible b is stored in the register `$s0`

```
addi $a0, $zero, 3
addi $a1, $zero, 4
jal equal
add $s0, $v0, $zero
```

- The following C++ function takes as inputs the base address of an int array A and returns the minimum value in A. Using the registers `$a0` and `$a1` as arguments to the function (`$a0` as base address of A, `$a1` as the size of A)and `$v0` as returned value. Translate the C++ function into a MIPS function.`

````
minArray:

lw $v0, 0($a0)
addi $t1, $zero, 1

loop:
slt $t2, $t1, $a1
beq $t2, $zero, exit

# gets A[i] into $t3
sll $t3, $t1, 2
add $t3, $t3, $a0
lw $t3, 0($t3)

slt $t4, $t3, $v0
beq $t4, $zero, continue

add $v0, $zero, $t3

continue:
addi $t1, $t1, 1
j loop

exit:
jr $ra
````


# Nested procedures tutorial 8
- Warm-up exercise
  - Explain the problem of the following MIPS program, and suggest the solution.

```
.text
.globl main 
main:
  jal calculate
  addi $s0, $v0 0, 
  li $v0, 10
  syscall 
calculate: 
  addi $a0, $zero, 1
  addi $a1, $zero, 2
  jal add_2_numbers
  jr $ra
add_two_numbers
  add $v0, $a0, $a1
  jr $ra
```
- the problem is that `calculate` does not preverse `$ra` register, which would then be overwritten by the `jal` insidel `calculate` to the next line: `jr $ra`. So the function would never go back to `li $v0, 10` in main and result in infinite function call.
- so the solution is to push the `$ra` value, which should point to `li $v0, 10` on to the stack at the beginning of `calculate`
- and then pop `$ra` at the end of `calculate` before `jr $ra`


## ALU
- Exercise 1
  - Some argue that the control signals `Binvert` and `CarryIn` of the bit-0 ALU can be combined into one control signal. Justoify this claim
  - Solution: 
    - For Addition operation, both Binvert and CarryIn of the bit-0 ALU should be 0. 
    - Subtraaction operation, both Binvert nad CarryIn of the bit-0 ALU should be 1.
    - OR/AND operations, Binvert should be 0, CarryIn should be "don't care".
    - Combining te two signals does not impair their functions. Therefore it is okay to combine both signals into one. inf act they are combined to form the Bnegate signal.

- Exercise 2 
  - Refer to the previous ALU slides, explain how LST operation can be performed. State the values for the control signals Binvert, CarryIn and operation. 
  - Solution:
    - Since we doing SLT, we need to do subtraction of two number and see if the result is less than 0
    - So Binvert and CarryIn has to be 1
    - Operation is probably 0b10 which is 2
      - wrong. it should be 3, 3 is slt. Which would enable the set to be forwarded
      - 0 is AND
      - 1 is OR
      - 2 is addition
      - 3 is SLT
    - How it works:
      - first subtract 2 numbers bitwise
      - check the sign bit to see if it is 1 (negative) or 0 (positive)
      - if 1, then `set` should be 1 which would then be forwarded to ALU0 (bit 0)'s `less` (set the destination register to 1) So that `less` would be `000...01` 
      - that's it.

- Exercise 4
  - Refer to the modified 32-bit ALU below, explain how the condition `A==B` is detected. State the values for the control signals `Bnegate` and `Operation`
  - ![alt text](attachments/image-1.png)
  - Operation should be `2` (`0b10`) for doing the subtraction by addition 
  - Bnegate is 1 for doing a subtraction
  - It sees whether `A==B` by doing `A - B == 0` basically subtracts them and see if the result (all 32 bits) are zero. By passing all the 32 bits into the OR gate. If either of them is 1, the OR gate results in 1 and the final NOT gate turns it to 0.

- Exercise 1
  - Do unsigned multiplication 5 x 7 (0101 and 0111) with optimized hardware, and fill in the table below:

|Iteration|Multiplicand| Product | remark |
|0|0101|0000 0111|initial state|
|1|0101|0101 0111|addition|
|1|0101|0010 1011|shift right|
|2|0101|0111 1011|addition|
|2|0101|0011 1101|shift right|
|3|0101|1000 1101|addition|
|3|0101|0100 0110|shift right|
|4|0101|0100 0110|No operation|
|4|0101|0010 0011|shift right|

- Exercise 3
  - Divide unsigned division 8(1000) by 3 (0011) with optimized hardware, fill in the table below.

|Iteration|Divisor (D)| Remainder(R)| Remark|
|0|0011|0000 1000|Initial state|
|0|0011|0001 0000|shift left (P = P << 1)|
|1|0011|1110 0000|Substraction|
|1|0011|0001 0000|Undo|
|1|0011|0010 0000|Shift left, set LSb 0|
|2|0011|1111 0000|Subtraction|
|2|0011|0010 0000|Undo|
|2|0011|0100 0000|Shift left, set LSb 0|
|3|0011|0001 0000|Subtraction|
|3|0011|0010 0001|Shift left, set LSb 1|
|4|0011|1111 0001|Subtraction|
|4|0011|0010 0001|Undo|
|4|0011|0100 0010|Shift left, set LSb 0|
|extra|0011|0010 0010|Adjust remainder|

- Exercise 4
  - Write down the sequence of MIPS instructions for the following C++ code, assuming variable a, b are stored in `$s0` and `$s1` respectively
    - `b = a / 3`

```
addi $t0, $zero, 3
div $s0, $t0
mflo $s1
```