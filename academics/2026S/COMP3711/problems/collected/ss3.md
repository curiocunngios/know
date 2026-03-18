---
aliases:
  - problem
  - collected problem
  - ss3
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# ss3
Consider the heap implementation of a Priority Queue shown in class that keeps its items  
in an Array $A[]$.  

Let Decrease-Key$(i, x)$ be the operation that compares $x$ to $A[i]$ :  

If $x \geq A[i]$ it does nothing.  
If $x < A[i]$, it sets $A[i] = x$ and, if necessary, fixes $A[]$ so that it remains a Heap.  

Show how to implement Decrease-Key$(i, x)$ in $O(\log n)$ time, where $n$ is the  
number of items in the Heap.  

Note: We will use the operation Decrease-Key$(i, x)$ later in the semester.


# Solution
````cpp
Decrease-Key(i, x) {
    if (x >= A[i]) { return }
    else { A[i] <- x }

    // since we decreases the value
    // the violation of the heap can only happen between the changed node and its parent
    // fix the heap like the insertion function of heap
    // goes from bottom to top if violation 
    while (i > 1 and A[i] < A[i/2]) {
        swap(A[i], A[i/2])
        i <- i/2
    }
}
````