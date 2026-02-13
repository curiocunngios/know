---
aliases:
  - merge sort
tags:
  - flashcard/active/algo
  - COMP3711
---

# Merge sort
- divide array into two halves
- Recursively solve the two halves
- merge the two solves to the the sorted whole.

# Algorithm
````cpp

// combining the two sorted lists into one whole
Merge(A, l, m, r):
    create two new arrays L and R
    L <- A[l, m]
    R <- A[m + 1, r]
    // add a sentinel to prevent troubles after exhausting one of the array
    add a ∞ at the end of L and R
    i <- 1
    j <- 1
    for k <- l to r
        if L[i] <= R[j] then
            A[k] <- L[i]
            i <- i + 1
        else
            A[k] <- R[j]
            j <- j + 1


Mergesort(A, l, r):
    if l = r then
        return
    m <- floor((l + r) / 2)
    // note that this is not exactly like binary search
    // for binary search it would be (A, l, m - 1) because we want to exclude that element which is not equal
    Mergesort(A, l, m)
    Mergesort(A, m + 1, r)
    Merge(A, l, m, r)        
````        
<u>First call:</u> Mergesort(A, 1, n)


# Solving the recurrence
- ## Expansion method
- ## Recursion tree method