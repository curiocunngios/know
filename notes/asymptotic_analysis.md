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
- ## In the context of mathematics:
  - a method of describing limiting behaviour
  - focuses on the growth rate of a function
    - considering the performance as input size: $n$ approaches infinity
  - ignoring constant factors and less dominant factors
  - ### Example:
    - suppose we are interested in the properties of a function $f(n)$ as $n$ becomes very large
    - if $f(n) = n^2 + 3n$
    - then as $n$ becomes very large, the term $3n$ becomes insignificant compared to $n^2$
    - $f(n)$ is said to be "asymptotically equivalent to $n^2$, as $n \to \infty$". 
    - often written symbolically as $f (n)$ ~ $n^2$
    - read as "$f(n)$ is asymptotic to $n^2$."
- ## In the context of computer science and [algorithm](./algorithm.md):
  - very similar to the context of math
  - Asymptotic analysis refers to the interest in the growth rate of an algorithm. 
    - often the interest of the performance of the algorithm when input size approaches infinity 
  - Often using a certain function e.g. $f(n) = \log n$ and asymptotics notations to describe it.
    - [upper bound](./big_O.md)
    - [lower bound](./big_Omega.md)
    - [tight bound](./big_Theta.md)
  - Usually on deriving the function that describes the algorithm perfect.   
    - It involves counting **primitive** steps that the algorithm takes
      - which also called [runtime analysis](./runtime_analysis.md)
    - It also involves proofing the _correctness_ of the algorithm, which involves mathematical tools like:
      - [Induction](./induction.md) 
# Common functions
- given a constant $a > 0$
  - $(\log n)^a$ 
    - _polylogarithmic_
  - $n^a$
    - _polynomial_
  - $a^n$
    - _exponential_
- ## Comparsion 
  - Given any $a, b > 0$ and $c > 1$, it follows the following order:
  $$ (\log n)^a < n^b < c^n $$