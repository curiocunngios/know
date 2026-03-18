---
aliases:
  - problem
  - collected problem
  - ss2
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# (SS2)
You are given an (implicit) infinite array $A[1, 2, 3\dots]$.  
and are told that, for some unknown $n$, the first $n$ items in the array are positive integers  
sorted in increasing order while, for $i > n$, $A[i] = \infty$.  

Give an $O(\log n)$ algorithm for finding the largest non-$\infty$ value in $A$.


- # Solution
````cpp
find_largest(A, l, r) {
    if (l == r) {
        return l
    }
    m = floor((l + r) / 2)

    if (A[m] < A[m + 1]) {
        if (A[m + 1] == ∞) {
            return A[m]
        }
        return find_largest(A, m + 1, r)
    }
    else {
        return find_largest(A, l, m - 1)
    }
}
````