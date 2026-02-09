---
aliases:
  - Big-Omega notation
  - asymptotic lower bound
tags:
  - flashcard/active/algo
  - COMP3711
---

# Big-Omega notation $\Omega$
- also known as the asymptotic lower bound 
- says that a function or [runtime of an algorithm](./runtime_analysis.md) cannot grow slower than a certain function

# Definition
- when we say $f(n) = \Omega(g(n))$
- it is read as "$f$ is big-Omega of $g(n)$"
- it means there exists a constant $c > 0$ and $n_0 > 0$ 
- such that $f(n) \geq c \cdot g(n)$ for all $n > n_0$
  - the constant $c$ allows ignoring constant multiplicative and additive factors
    - Example: $n$ is $\Omega(2n)$ with the constant $c = \frac{1}{2}$

# Properties
Same as [big-O notation](./big_O.md)  