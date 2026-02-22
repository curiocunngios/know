---
aliases:
  - Selection sort
  - exchange sort
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

# pseudo-code
````py
for i <- 1 to n - 1:
    for j <- (i + 1) to n:
        if A[i] > A[j]:
            swap(A[i], A[j]) 
````

# Running time analysis
- count the number of comparisons, i.e. the number of times of `if A[i] > A[j]:` being run.
- it dominates other operations
### How to count?
- For every _`i`_, `if A[i] > A[j]:` is called $n - (i + 1) + 1 = (n - i)$ many times
- and _`i`_ goes from $1$ to $n - 1$, so the total is $(n - 1) + (n - 2) + ... + 3 + 2 + 1$, which is a summation from $1$ to $n - 1$
$$\sum_{i=1}^{n - 1} i = \frac{n(n - 1)}{2}$$
### An alternative way to count 
- consider that `if A[i] > A[j]:` is ran on every possible pair of `(i, j)`. So counting all the number of pairs, it would be: 
$${n \choose 2} = \frac{n(n-1)}{2}$$

# proof of correctness
- let's prove it by induction on $n$
- Claim: When Selection sort terminates, the array is sorted
- when $n = 1$, where there's only one element, it is always sorted, so the algorithm is obviously correct for $n = 1$ 
- Assume the algorithm sort every array of size $n - 1$ correctly
- Now consider what the algorithm does for A[1..n]
  - puts smallest item to A[1]
  - runs selection sort on A[2..n]
    - By induction, this sorts the items in A[2..n]
  - Since A[1] is smaller than every item in A[2..n]
    - all the items A[1..n] are now sorted