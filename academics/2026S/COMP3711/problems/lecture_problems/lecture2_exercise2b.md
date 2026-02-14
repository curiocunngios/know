---
aliases:
  - problem
  - lecture notes 2 exercise 2b
tags:
  - flashcard/active/algo
  - COMP3711
  - status/incompleted
---

# Finding the last 0:
You are given an array $A[1. . n]$ that contains a sequence of 0 
followed by a sequence of 1 (e.g., 0001111111). $A$ contains at least 
one 0 and one 1.


(2) Suppose that $k$ is much smaller than $n$. Design an $O(\log k)$-time algorithm that finds the position $k$ of the last 0. you can 
re-use solution of [part 1](./lecture2_exercise2a.md).


# Solution
````cpp
find_last_0_logk(A):
  i <- 1
  while i <= n:
    if A[i] = 1:
      return find_last_0(A, 1, i)
    i <- i * 2
  return find_last_0(A, 1, n)
````