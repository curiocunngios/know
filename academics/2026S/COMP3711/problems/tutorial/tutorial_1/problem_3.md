---
aliases:
  - problem
  - tutorial problem 3
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
  - status/revision
---

# Problem 3
Let $f(n)$ be a function. Suppose that, for all $i > 0, \quad T_i(n) = O(f(n))$  
Define $g_k(n) = \sum_{i = 1}^{k} T_i(n)$
- (a) For fixed $k$, is $g_k(n) = O(f(n))$
- (b) Define $g(n) = g_n(n)$
  - is $g(n) = O(f(n))$?
  - is $g(n) = O(nf(n))$?

# Solution 
- (a)
  - yes, $g_k(n)$ just keeps adding function of $O(f(n))$, so it is basically $c \cdot O(f(n))$ which simplifies to $O(f(n))$
- (b)
  - (wrong) yes for both, $g(n)$ is just $g_k(n)$ with $k = n$, same value as the input of the function, which is also a fixed value. 
- the difference is that $n$ is a variable, $k$ is a constant defined by the question   