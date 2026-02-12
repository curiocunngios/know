---
aliases:
  - Binary Search
tags:
  - flashcard/active/algo
  - COMP3711
---

# Binary Search
- Input: A sorted array A[1..$n$] and an element $x$
- Output (target): The position of $x$ in the array
- Idea of binary search: 
  - Always start at the middle, compare $x$ with the element:
    - at the middle, let's say the element at the middle is $y$
      - if equal, that's the answer
      - if $y < x$
        - goes to the middle of the **right** portion of the array
      - if $y > x$
        - goes to the middle of the **left** portion of the array
# Code
````cpp
// m stands for middle
// l stands for left position
// r stands for right position
BinarySearch(A, l, r, x):
    if l > r:
        return nil
    m = floor((l + r) / 2)
    if A[m] = x:
        return m
    if A[m] < x:
        return BinarySearch(A, m + 1, r, x)
    else:
        return BinarySearch(A, l, m - 1, x)
````
## <u>First call:</u> BinarySearch(A, 1, n, x)

# Analysis
- Let $T(n)$ be the number of comparisons needed for $n$ elements.
- Recurrence: With at most two comparisons: `if A[m] = x:` and `if A[m] < x:`
  - half of the array is eliminated
  - then proceed to search for element in the remaining half
    - which has a size of $\frac{n}{2}$.
    - Thus, the recurrence for counting the number of comparisons is:
$$
T(n) = T(\frac{n}{2}) + 2 \text{ if n > 1, with } T(1) = 1 
$$

## Solving the recurrence 
- ### by expansion method
$$\begin{aligned}
T(n) 
&= T(\frac{n}{2}) + 2 \\
&= T(\frac{\frac{n}{2}}{2}) + 2 + 2 \\
&= T(\frac{\frac{n}{2^{2}}}{2}) + 2 + 2 + 2 \\
&= T(\frac{n}{2^{i}}) + 2i \\
&= T(\frac{n}{2^{\log_2{n}}}) + 2{\log_2{n}} \quad (i = \log_2{n})\\
&= T(1) + 2{\log_2{n}} \quad \\
&= 1 + 2{\log_2{n}} \quad \\
&= \Theta(\log n)
\end{aligned}
$$

- ### By recursion tree
