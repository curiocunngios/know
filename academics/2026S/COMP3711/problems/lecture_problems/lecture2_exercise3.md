---
aliases:
  - problem
  - lecture notes 2 exercise 3
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# Exercise 3 
- Prove $\sum_{i = 0}^{n - 1} c^{i} = \frac{c^{n} - 1}{c - 1}$ (c is a positive constant)

# Solution
Let $S(n) = \sum_{i = 0}^{n - 1} c^{i}$ and $S(m) = \sum_{i = 1}^{n} c^{i}$
then we have:
$$\begin{aligned}
S(m) - S(n) &= c^{n} - 1 \\
S(m) &= S(n) + c^{n} - 1 \quad -(1)\\ 
\newline
S(m) &= c \cdot S(n) \quad -(2) \\

c \cdot S(n) &= S(n) + c^{n} - 1 \\
S(n) &= \frac{c^{n} - 1}{c - 1}
\end{aligned}$$