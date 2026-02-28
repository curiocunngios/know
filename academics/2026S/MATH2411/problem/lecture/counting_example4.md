---
aliases:
  - problem
  - lecture notes 2 probability
  - counting 4
tags:
  - flashcard/active/stat
  - MATH2411
  - status/completed
---

# Problem
- We select two cards simultaneously and randomly from a standard deck of 52 playing cards.
- Let 
  - $A=\{\text{the two selected cards are both queen}\},$
  - $B=\{\text{one selected card is Jacket, the other one is heart}\}$
- find $P(A)$ and $P(B)$

# Solution 
$$
P(A) = \frac{4 \choose 2}{52 \choose 2} \\
\quad \\ 
\quad \\
P(B) = \frac{\overbrace{{3 \choose 1 } \times {13 \choose 1}}^{\text{non-heart jack}} + \overbrace{{1 \choose 1 } \times {12 \choose 1}}^{\text{heart jack chosen, -1 heart}}}{52 \choose 2} = 1/26
$$