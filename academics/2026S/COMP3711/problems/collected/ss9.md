---
aliases:
  - problem
  - collected problem
  - ss9
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# (SS9)
There are $n$ items in an array. It is easy to see that that their minimum can be found  
using $n -1$ comparisons and that $n -1$ are actually required. It is also easy to see that  
finding the max can similarly be done using $n -1$ comparisons with $n -1$ required.  

Design an algorithm that finds both the minimum and the maximum using at  
most $\frac{3}{2}n + c$ comparisons, where $c > 0$ can be any constant you want.  

Note: Although it is harder to prove, $\frac{3}{2}n + c$ comparisons is actually a lower bound.


- # Solution
````cpp
min = ∞
max = -∞

// for even n
i <- 1
while (i <= n) {
    j <- i + 1

    if (A[i] < A[j]) {
        s <- A[i]
        b <- A[j]
    }
    else {
        s <- A[j]
        b <- A[i]
    }

    if (s < min) {
        min <- s
    }

    if (b > max) {
        max <- b
    }

    i <- i + 2
}
````