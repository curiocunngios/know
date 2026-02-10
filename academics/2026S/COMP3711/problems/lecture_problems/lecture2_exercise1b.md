---
aliases:
  - problem
  - lecture notes 2 exercise 1a
tags:
  - flashcard/active/algo
  - COMP3711
  - status/incompleted
---

# Rotated Sorted Array:
Let $A[1..n]$ be a sorted array of $n$ distinct numbers that has been **rotated** $n - k$ steps for some unknown integer $k \in [1..n - 1].$ That is, $A[1..k]$ is sorted in increasing order, $A[k + 1..n]$ is also sorted in increasing order. And $A[n] < A[1]$. The following array $A$ is an example of $n = 16$ and $k = 10$.

$𝐴 = [9, 13, 16, 18, 19, 23, 28, 31, 37, 42, 0, 1, 2, 5, 7, 8].$

Question: Design an $O(\log n)$-time algorithm that for any given $x$, find the position of $x$ in the given array, or report that it doesn't exists.

# Solution
