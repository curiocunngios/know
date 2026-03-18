---
aliases:
  - problem
  - collected problem
  - ss1
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# (SS1)
$a_1, a_2, \dots, a_n$ is a sequence that has the following property:  
There exists some $k$ such that  

$\forall i : 1 \leq i < k, a_i > a_{i+1}$  
$\forall i : k \leq i < n, a_i < a_{i+1}$.  

Such a sequence is unimodal with unique minimum $a_k$.  
Design an $O(\log n)$ algorithm for finding $k$.


- # Solution

````cpp
// use the idea of binary search
// since the runtime log n hints

find_k(A, l, r) {
    if (l == r) { return l }

    m = floor((l + r) / 2)

    // if it is at the decreasing side
    if (A[m] > A[m + 1]) {
        // the solution must be at the right
        return find_k(A, m + 1, r)
    }
    else {
        return find_k(A, l, m - 1)
    }
}
````