---
aliases:
  - problem
  - tutorial problem 2
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# Problem 2

Suppose $T_1(n) = O(f(n))$ and $T_2(n) = O(f(n))$. Which of the following are true? Justify your answers.

- (a) $T_1(n) + T_2(n) = O(f(n))$
- (b) $\frac{T_1(n)}{T_2(n)} = O(1)$
- (c) $T_1(n) = O(T_2(n))$

# Solution
(a) is true based on the properties of asymptotic notations  
(b) and (c) are false because we only have $O(f(n))$ and we don't know what $T_1(n) and T_2(n)$ exactly are
- counter example such that (b) and (c) are false:  
  - $f(n) = n^2$
  - $T_1(n) = 3n$
  - $T_2(n) = 1$
- mental notes: $O(n)$ only denotes the ceiling, we don't know what exactly is under if the question did not specify