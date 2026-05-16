---
aliases:
  - tutorial rough notes
tags:
  - flashcard/active/ass
  - COMP2611
---

# Rough tutorial notes 

# Content before midterm

# TUTORIAL 1 COMBINATIONAL LOGIC CIRCUIT
- Overview
  - Cominational logic circuit
    - no Memory output(s) solely determined by input(s)
    - Unlike sequential logic where the output is also determined by previous output
  - Truth table and logic function 
  - Two-level logic and PLA
  - Simplification with Boolean Algebra and K-map
  - Circuit design
  - Two practical examples
    - Bit comparator
    - Encoder

# TUTORIAL 2 SEQUENTIAL LOGIC CIRCUIT
- Overview
  - Sequential logic circuits
    - have memory 
    - output depends on the current input(s) and value stored in the memory (called state)
  - Clock
  - Timing diagram
    - To describe the behavior of the circuit along time
  - Examples
    - S-R latch and D latch with NAND GATES
    - Edge-triggered D flip-flop
    - Register
    - Binary counter

## Clock
- A clock acts as a global signal that gives all the components in the system an indicatoin of time.
- Clock is used in sequential logic to decide and co-ordinate state updates.
- A clock signal has three important key words
- ![alt text](attachments/image-5.png)

## S-R Latch with NAND gates
- S-R latch (Set-Reset latch) can also be implemented by NAND gates
- Un-clocked memory element (Asynchronous device)
- ![alt text](attachments/image-7.png)
- Note
  - S-R NAND latch is an inverted verison of S-R NOR latch. Thus, the truth table is also inverted.
  - The input signal is effective when it is de-asserted.
## A clocked Memory Element: D-latch
- The value stored in a D-latch can be updated iff the clock is asserted i.e. C = 1
- An implementation using NOR gates is shown below. S-R latch (Set-Reset latch) can also be implemented by NAND gates
- ![alt text](attachments/image-8.png)

## D-latch with NAND Gates
- D latch can also be implemented with NAND gates as shown in below figure.
  - Clocked memory element (Synchronous device)
  - ![alt text](attachments/image-9.png)

## D-flip-flop
- A D flip-flop can be updated only on a falling/rising clock edge.
  - There are many ways to create a D flpi flop, the figure below shows a D flip flop created from two D latches

## Register file
- A register file is a piece of hardware that allows reading from and writing to the desired registers.
- It is usually implemented by way of fast statis RAMs with multiple ports.
- ![alt text](attachments/image-10.png)

## Synchronous Binary Counters
- Synchronous digital circuit - Binary counter with 2-bit memory
  - Only has clock signal as input
  - At each clock pulse, the counter takes up a new tate and thus goes through a specific count sequence
  - The block diagram, structure and state transition diagram of a two-bit binary counter is of the following form
  - Design the state sequencing logic which consists of the two combinational circuits labelled Circuit 1 and Circuit 2.

# TUTORIAL 4 FLOATING POINT NUMBER REPRESENTATION AND CHARACTER
- Representation of real numbers, very large/small numbers
  - IEEE 754 single precision floating point
  - IEEE 754 Double precision floating point
- Representation of English letters
  - ASCII encoding

## The IEEE 754 single precision floating point 
  - The IEEE 754 standard uses 32 bits to represent single precision floating point numbers.
  - **S**: Sign bit (0 positive, 1 negative)
  - Exponent: 8-bit field, bias = 2^{8 - 1} - 1 = 127
  - Significand: 23-bit field, implicit 1

|31 - 30| 30 - 22 | 22 - 0 |
|-|-|-|
|S|Exp (exponent)| Significand |
|1 bit| 8 bits| 23 bits|

## IEEE754 double precision 
- The IEEE 754 standard uses 64 bits to represent double precision floating point numbers.
- S: sign bit (0 positive, 1 negative)
- Exponent: 11-bit field, bias = 1023
- Significand: 52-bit field, implicit 1

## Overflow and underflow in floating point
- Overflow (floating-point)
  - a positive exponent becomes too large to fit in the exponent field
- Underflow (floating-point)
  - A negative exponent becomes too large to fit in the exponent field

## IEEE754 special cases, denormalized cases
- single precision
![alt text](attachments/image-2.png)

- double precision
![alt text](attachments/image-3.png)

## representation of text with ASCII codes 
- The Amreican Standard code for information interchange (ASCII)
- ASCII is a character encoding scheme for encoding text in 8 bits
- The list of the first 128 characters are shown below
![alt text](attachments/image-4.png)











# Content after midterm

## ISA
- ISA defines the hardware/software inferface
- ![alt text](attachments/image.png)
- ISA types:
  - CISC (Complex instruction set computer)
    - e.g. x86
  - RISC (reduced instruction set computer)
    - e.g ARM, MIPS

- Instruction set architecture (ISA), is the part of the processor that is visible to the programmer or compiler writer
  - the native data types,
  - instructions,
  - registers,
  - addressing modes,
  - memory architecture
  - interrupt and exception handling
  - and external I/O
- MIPS Registers
  - The MIPS central processing unit contains
    - 32 general purpose 32-bit registers
    - numbers 0-31
  - MIPS has established a set of convetions as to how registers should be used
    - not enforced by the hardware
- MIPS data types
|.ascii|{{without null terminator}}|
|-|-|
|.asciiz|{{string with null}}|
|.byte|byte|
|.half|a half word (2 bytes)|
|.word|a word|
|.space n| reverses n bytes of space in memory.|

# MIPS syscall
- A number of system services, mainly for input and output, are available for use by your MIPS program.
- `syscall` is used to request a such service from the kernel
  - Step 1: Load the service number in register `$v0`
  - Step2: Load argument values, if nay, in `$a0, $a1, $a2`, or `$f12` as specified.
  - Step 3: Issue the SYSCALL Instruction
  - Step 4: Retrieve return values, if any, from result registers as specified.

## Available services
|Service| Code in `$v0`| Argument(s)| Result(s)|
|-|-|-|-|
|Print Integer|1| `$a0` = number to be printed| |
|Print Float|2|`$f12` = number to be printed| |
|Print double|3|`$f12` = number to be printed| |
|Print String|4|`$a0` = address of string in memory| |
|Read Integer|5| |number returned in `$v0`|
|Read Float|6| | number returned in `$f0`|
|Read Double|7| | number returned in `$f0`|
|Read String|8| `$a0` = address of input buffer in memory. `$a1` = length of buffer| |
|Sbrk|9|`$a0` = amount| Address in `$v0`|
|exit|10| | |

# Zero Extension or Sign etension
- Extension is needed when there is a size mis-match
  - Source and destination in assignment
  - two operands of a calculation

|Type|Example|Extension|
|-|-|-|
|Arithmetic Instructions|`addi/addiu`|Always sign-extend|
|Load/store Instructions|`lb/lw/sw/sb`|Sign-extend|
|Load/store Instructions|`lbu`|zero-extend|
|Logical instructions|`ori, andi`| always zero-extend|

## Zero extension
- Example: `ori $t8, $zero, 0x4`
- `ori` is I format
- `0x4` is stored in the instruction with 16 bits `0000 0000 0000 0100` 
- It is to be bitwise ORed with the thiry-two bits of register zero: `0000 0000 0000 0000 0000 0000 0000 0000`
- This would not ordinarily be possible because the operands are different lengths. However, MIPS zero extends the sixteen-bit operand so the operands are the same length.
- Sometimes this is also called {{padding with zeros}}

## Sign Extension for signed Numbers
- We often need to represent a value given in a certain number of bits by using a larger number of bits.
- You can repeat the sign bit of the number as many times as it is needed to the left
- {{Sign extension preserves the original value!! (Assuming that they are originally treated as a signed number i.e. in 2's complement form. This is even the case for `addu` (it's NOT unsigned operation even there's a `u`. All it does is not trigger the overflow interruption.))}} 


# TUTORIAL 8 NESTED PROCEDURE CALL AND ARITHMETIC LOGIC UNIT
- Overview
  - Nested procedure (function calls inside a function all)
  - recursion (function calling itself inside itself)
    - register convention
  - 1-bit Arithmetic logic unit (ALU)
    - add, sub, and, or
  - 32-bit ALU
    - add, sub, and, or, beq, slt

## 32-bit MIPS arithmetic and logic Unit (ALU)
- First, build 1 -bit ALU
  - 1-bit logic unit (AND and OR) 
  - 1 bit full adder (ADD) 
  - combine the above and build 1-bit ALU (ADD, SUB, AND, OR)
- Then build 32-bit ALU by connecting 32 of 1-bit ALU
  - connect ALU0 to ALU31 with ripple carry structure
  - ALU31 works on MSb (sign bit) so it's a bit different from ALU to ALU30. For example, there should be a small circuit getting the sign bit to detect a potential overflow
  - Further add support to SLT and BEQ

# TUTORIAL 9 COMPUTER ARITHMETIC
- Overview
  - Unsigned multiplication (optimized version) 
  - Unsigned division (version 1 -> optimized version) 
  - Booth's algorithm for signed multiplication (optional)

# TUTORIAL 10 SINGLE-CYCLE DATAPATH AND CONTROL
- overview
  - Single-cycle implementation datapath
    - instruction fetch, decode and register read, execution, memory reference,w rite back
  - Single-cycle implementation contorl 
    - instruction is executed through the guidance of the control signals
    - Effect of each control signal
  - Work with two practical exmaples
    - `AND` instruction
    - Encoder

## 5 steps to execute an instruction
- Step 1: Instruction fetch
  - Fetch the instruction from the instruction memory pointer by the program counter (PC)
  - Do PC + 4 calculation 
- Step 2: Instruction Decode and Register read
  - decode the instruction 
  - Read source registers `$rs` and `$rt` 
- Step 1 and 2 {{are the same}} for all instructions 
- Processor {{knows what the instruction is}} after the decoding step
- Step 3: Execution
  - R-type arithmetic/logic instructions: perform the required ALU operation 
  - Memory-reference instructions: memory address calculation
  - Conditional branch instructions: comparison and branch calculation
- Step 4: Memory Access (read/write)
  - Required only for the `lw` and the `sw` instructions
- Step 5: Write Back
  - Write back the result to destination reigster (`$rt` and `$rd`) 
  - Update PC with PC + 4 or branch target address (conditional or unconditional jump)

