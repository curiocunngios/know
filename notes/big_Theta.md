---
aliases:
  - Big-Theta notation
  - asymptotic tight bound
tags:
  - flashcard/active/algo
  - COMP3711
---

# Big-Theta notation $\Theta$
- also known as the asymptotic tight bound 
- says that a function or [runtime of an algorithm](./runtime_analysis.md) cannot grow slower and faster than a certain function

# Definition
- when we say $f(n) = \Theta(g(n))$
- it is read as "$f$ is big-Theta of $g(n)$"
- it means there exists a constant $c_1, c_2 > 0$ and $n_0 > 0$ 
- such that $c_2 \cdot g(n) \leq f(n) \leq c_2 \cdot g(n)$ for all $n > n_0$
  - the constant $c_1, c_2$ allows ignoring constant multiplicative and additive factors
    - Example: refers to [big-O](./big_O.md) and [big-Omega](./big_Omega.md)

# Properties
Same as [big-O notation](./big_O.md)