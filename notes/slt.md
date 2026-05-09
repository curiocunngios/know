---
aliases:
    - slt
    - set less than 
    - slt implementation
    - slt circuit implementation 
tags:
    - flashcard/active/ass
    - COMP2611
---

# slt
- stands for set less than
- if less than, set the register destination to be 1, otherwise 0

# circuit implementation
- high level idea:
  - example: `slt $t0, $t1, $t2`
    - whether `$t1 < $t2` can be converted to a new question: whether `$t1 - $t2 < 0`
    - and whether `$t1 - $t2 < 0`, can be first calculated using the adder of ALU to do subtraction, and then do a check on the sign bit to see if the sign bit is 1 (negative) or 0 (positive) since the number is represented in 2's complement
- small implementation details:
  - on the normal ALU, simply add an additional input parameter, we call it "less"
  - "less" will be a constant: 0 on ALU1 - ALU30
  - for ALU0, "less" would be copied from the resulting bit of ALU31 
    - Since the most significant bit is the sign bit
  - my guess is that there's one more detail not mentioned in class: 
    - we probably need to zero out the results on ALU1 - ALU30 are all 0 (?
    - maybe add a `andi` mask with 0 perhaps on those bits (?

 