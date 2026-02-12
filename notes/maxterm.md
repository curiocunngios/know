---
aliases:
  - maxterm 
tags:
  - flashcard/active/ass
  - COMP2611
---

# maxterm
- denoted as $M_i$
  - $0 \leq i \leq 2^n - 1$
  - the sum (`OR`) of $n$ Boolean variables 
  - in its original or negated form

| Variable |     | Minterm |        |             | Maxterm  |             |
| -------- | --- | ------- | ------ | ----------- | -------- | ----------- |
| x        | y   | z       | Term   | Designation | Term     | Designation |
| 0        | 0   | 0       | x'y'z' | m₀          | x+y+z    | M₀          |
| 0        | 0   | 1       | x'y'z  | m₁          | x+y+z'   | M₁          |
| 0        | 1   | 0       | x'yz'  | m₂          | x+y'+z   | M₂          |
| 0        | 1   | 1       | x'yz   | m₃          | x+y'+z'  | M₃          |
| 1        | 0   | 0       | xy'z'  | m₄          | x'+y+z   | M₄          |
| 1        | 0   | 1       | xy'z   | m₅          | x'+y+z'  | M₅          |
| 1        | 1   | 0       | xyz'   | m₆          | x'+y'+z  | M₆          |
| 1        | 1   | 1       | xyz    | m₇          | x'+y'+z' | M₇          |