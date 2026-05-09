---
aliases:
    - recursion mips 
    - recursion assembly 
tags:
    - flashcard/active/ass
    - COMP2611
---

# assembly recursion
- nothing much tricky
- remember to save the value of certain registers inside the recursive function even if that register isn't preserved registers (e.g. `$a0`)
- the reason behind this is that we might need to change those register to call the function again but at the same time we also want the original value 
  - For example, $\overbrace{n}^\text{we want original a0} \times fact\underbrace{(n - 1)}_\text{need to change a0  to a0 - 1}$
