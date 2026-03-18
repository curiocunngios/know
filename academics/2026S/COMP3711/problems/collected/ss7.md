---
aliases:
  - problem
  - collected problem
  - ss7
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# (SS7)
An array $A[1 \dots n]$ is circularly sorted if there exists some $k \in [1 \dots n]$ such that $A[k \dots n]$  
concatenated to $A[1 \dots k -1]$ is sorted. As an example  

$A = [30, 40, 55, 10, 18, 24, 27, 28]$  

is circularly sorted with $k = 4$.  

How can you modify the binary search algorithm to search for an item in $A$ in $O(\log n)$  
time.  

Note: To simplify the problem, assume that all of the items in $A$ are unique (no duplicates).

- # Solution

````cpp
circular_binary_search(A, l, r, x) {
    if (l > r) { return nil }

    m <- floor((l + r) / 2) 
    if (A[m] == x) { return m }
    if (A[m] < A[r]) {
        if (A[m] < x <= A[r]) {
            return circular_binary_search(A, m + 1, r, x)
        }
        else {
            return circular_binary_search(A, l, m - 1, x)
        }
    } 
    else {
        if (A[m] > x >= A[l]) {
            return circular_binary_search(A, l, m - 1, x)
        }
        else {
            return circular_binary_search(A, m + 1, r, x)
        }
    }
}
````