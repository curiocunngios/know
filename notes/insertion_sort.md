---
aliases:
  - Insertion sort
tags:
  - flashcard/active/algo
  - COMP3711
---

# Insertion sort
Assuming to sort in ascending order. The idea is to continously swap the "key" with the element on the left until you meet an element smaller than the "key".

# pseudo-code
````cpp
// start from 2 since there's no element on the left for the very first element
for i <- 2 to n: 
  for j <- i to 2:
    if A[j - 1] <= A[j]:
      break;
    swap(A[j - 1], A[j])
    j <- j - 1
  i <- i + 1

````

# Runtime analysis
## worst case complexity:
- in the worse case, the array is inversely sorted
- `A[j - 1] <= A[j]` has to be run the maximum amount of time 
- i.e., it never breaks
  - when _`i`_ = 2, it runs 1 time
  - when _`i`_ = 3, it runs 2 times
  - when _`i`_ = $n$, it runs $n - 1$ times
  - total: $\frac{n(n-1)}{2}$ times
  - complexity: $O(n^2)$
