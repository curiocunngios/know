---
aliases:
  - problem
  - lecture notes 2 exercise 1a
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# Rotated Sorted Array:
Let $A[1..n]$ be a sorted array of $n$ distinct numbers that has been **rotated** $n - k$ steps for some unknown integer $k \in [1..n - 1].$ That is, $A[1..k]$ is sorted in increasing order, $A[k + 1..n]$ is also sorted in increasing order. And $A[n] < A[1]$. The following array $A$ is an example of $n = 16$ and $k = 10$.

$𝐴 = [9, 13, 16, 18, 19, 23, 28, 31, 37, 42, 0, 1, 2, 5, 7, 8].$

Question: Design an $O(\log n)$-time algorithm to find the value of $k$. ($A[k]$ is the maximum element in the array)

# Solution
- First we need to identify the algorithm family. From it being $O(\log n)$ and the array being sorted. We can guess that it is from the family of binary search.

## Wrong algorithm
````cpp
find_k(A, l, r):
    if (l > r):
        return nil
    m = (l + r) / 2
    if (A[m] > A[m + 1]):
        return m
    if (find_k(A, l, m - 1) == nil):
        return find_k(A, m + 1, r)
````
<u>First call:</u> find_k(A, 1, n)
- the above algorithm is WRONG for the question. Because it has $O(n)$ time complexity in the worst-case. In the worst-case, `find_k(A, l, m - 1)` returns nil and it would make **two** recursive calls.


## Correct algorithm
````cpp
find_k(A, l, r):
    if (l > r):
        return nil
    m = (l + r) / 2
    if (A[m] > A[m + 1]):
        return m
    if (A[m] >= A[1]):
        find_k(A, m + 1, r)
    else:
        find_k(A, l, m - 1)
````