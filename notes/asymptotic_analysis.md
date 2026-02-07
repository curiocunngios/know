---
aliases:
  - Asymptotic notations
  - Asymptotic analysis
  - asymptotics
tags:
  - flashcard/active/algo
  - COMP3711
---

# Asymptotic analysis
- a method of describing limiting behaviour
- focuses on the growth rate of a function
  - considering the performance as input size: _n_ approaches infinity
- ignoring constant factors and less dominant factors

# Example
- suppose we are interested in the properties of a function $f(n)$ as $n$ becomes very large
- if $f(n) = n^2 + 3n$
- then as $n$ becomes very large, the term $3n$ becomes insignificant compared to $n^2$
- $f(n)$ is said to be "asymptotically equivalent to $n^2$, as $n \to \infty$". 
- often written symbolically as $f (n)$ ~ $n^2$
- read as "$f(n)$ is asymptotic to $n^2$."


# Common functions
given a constant $a > 0$
- $(\log n)^a$ 
  - _polylogarithmic_
- $n^a$
  - _polynomial_
- $a^n$
  - _exponential_
## Comparsion 
Given any $a, b > 0$ and $c > 1$, it follows the following order:
$$ (\log n)^a < n^b < c^n $$