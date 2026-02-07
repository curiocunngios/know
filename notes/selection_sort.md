---
aliases:
  - Selection sort
tags:
  - flashcard/active/algo
  - COMP3711
---

# Selection sort
Assuming to sort to ascending order, find the _i-th-smallest_ element and swap it with the _i-th_ element.

- First, find the smallest element of the entire array and swap it with the first element. Now the first element would be at the correct position.
- Second, find the smallest element of the remaining unsorted portion of the array and swap it with the second element.
- Repeat the following until it reaches the end of the array:
  - move on to _i-th_ element, then find the smallest element of the remaining unsorted portion of the array and swap it with the _i-th_ element

## Simple version of selection sort in pseudo-code (exchange sort)
````py
for i <- 1 to n - 1:
    for j <- (i + 1) to n:
        if A[i] > A[j]:
            swap(A[i], A[j]) 
````
### Running time analysis
- count the number of comparisons, i.e. the number of times of `if A[i] > A[j]:` being run.
- it dominates other operations
### How to count?
- For every _`i`_, `if A[i] > A[j]:` is called $n - (i + 1) + 1 = (n - i)$ many times
- and _`i`_ goes from $1$ to $n - 1$, so the total is $(n - 1) + (n - 2) + ... + 3 + 2 + 1$, which is a summation from $1$ to $n - 1$
$$\sum_{i=1}^{n - 1} i = \frac{n(n - 1)}{2}$$
### An alternative way to count 
- consider that `if A[i] > A[j]:` is ran on every possible pair of `(i, j)`. So counting all the number of pairs, it would be: 
$${n \choose 2} = \frac{n(n-1)}{2}$$

