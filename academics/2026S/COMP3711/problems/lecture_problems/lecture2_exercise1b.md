---
aliases:
  - problem
  - lecture notes 2 exercise 1b
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
- apply `find_k`, the solution of the [previous exercise](./lecture2_exercise1a.md) to find the position of `k` i.e. the maximum element
- check if the element to be found is smaller than or greater than the first element of the rotated array
  - smaller:  
    - it's in the portion that has been rotated
    - i.e. `k + 1` to `r`
  - greater
    - it's in the portion that has not been rotated
    - i.e. `1` to `k`
  - after finding out which portion it is in, then just do binary search on that portion
## Algorithm
````cpp
// from the previous exercise 1a
find_k(A, l, r):
    if (l > r):
        return nil
    m <- (l + r) / 2
    if (A[m] > A[m + 1]):
        return m
    if (find_k(A, l, m - 1) == nil):
        return find_k(A, m + 1, r)

find_x_pos(A, l, r, x):
    k <- find_k(A, l, r)
    if x < A[1]:
        pos <- binary_search(A, k + 1, r, x)
    else
        pos <- binary_search(A, l, k, x)
    return pos
````