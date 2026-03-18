---
aliases:
  - problem
  - collected problem
  - ss8
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# (SS8) Heapify
In class, we learned how to maintain a min-heap implicitly in an array.  
Given that $A[i \dots (j -1)]$ represents an implicit min-heap, we saw how to add $A[j]$ to the  
min-heap , in $O(\log j)$ time.  
This led to an $O(n \log n)$ algorithm for constructing a min-heap from array $A[1, \dots , n]$.  

For this problem show how to construct a min-heap from an array $A[1 \dots n]$ in  
$O(n)$ time.  

It might help to visualize the min-heap as a binary tree and not an array.  

For simplification, you may assume that $n = 2^{k+1}-1$ for some $k$, i.e., the tree is complete.  

Hint: Consider “heapifying” the nodes processing them from bottom to top.

- # Solution
````cpp
heapify(A, n) {
    j <- n / 2

    while (j >= 1) {

        i <- j
        while (2i <= n) {
            // s for index with smaller value
            // will change later
            s <- 2i 
            if (2i + 1 <= n and A[2i + 1] < A[2i]) {
                s <- 2i + 1
            }

            if (A[i] > A[s]) {
                swap(A[i], A[s])
                i <- s
            }
            else {
                break
            }
        }
        j <- j - 1
    }
}
````