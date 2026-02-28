---
aliases:
  - problem
  - lecture notes 2 probability
  - basic 
tags:
  - flashcard/active/stat
  - MATH2411
  - status/completed
---

# Problem
- throw 2 dice. What is the probability that the sum of them are 6

# Solution 
- ## method 1 (counting)
  - Total sample space (all combinations) $=6 \times 6 = 36$ where first 6 is the number of choices of the first number, second 6 is the number of choices of the second number
  - since 6 can be a sum of $(1, 5), (2, 4), (3, 3)$ and their position can be swapped eexcept it's the same for $(3, 3)$: $(5, 1), (4, 2)$ 
  - so the count of the event happening is: $2 \times 3 - 1 = 5$
  - answer: $5/36$
