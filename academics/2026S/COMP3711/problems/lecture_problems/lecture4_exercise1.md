---
aliases:
  - problem
  - lecture notes 4 exercise 1
tags:
  - flashcard/active/algo
  - COMP3711
  - status/complete
---

# Problem
## Maximizing Stock Profits
- You have found a newspaper from the future that tells you the price of a stock over a period of $n$ days in the next year. The presents to you as $p[1..n]$ where $p[i]$ represents the price of the stock on day $i$ 
- Design a $O(n\log n)$ algorithm to make as much money as possible, i.e. find a pair of $i, j$ with $1 \leq i \leq j \leq n$ such that $p[j] - p[i]$ is maximized over all possible such pairs
- Note: you are only allowed to buy the stock once and sell it later
  - you are not allowed to make multiple purchases and sales over time
- If there is no way to make money.
  - i.e. $p[j] - p[i] = 0$ for all pairs of $i, j$ that $1 \leq 1 \leq j \leq n$
  - the algorithm should return 0
- I feel like this problem is very similar to maximum subarray problem.
  - It is just that now we are not summing the elements in a certain interval
  - It is that we need to find the smallest starting element and biggest ending element
# Solution
  - a few mental notes:
  - although I can most certainly copy the maximum subarray problems and change a few things. 
  - It is better to not do so:
    - benefit the future
    - you write them from scratch yourself gains you experience in writing the algorithm 
    - make things faster and easier in the future

# Code
````cpp
max_profit(A, l, r):
// base case
// broken down to only 1 element
if (l = r)
    // buying and selling the element on the same day
    // gains nothing, so 0
    return 0 

m <- floor((l + r) / 2)

// divides the problem into 2 smaller subproblems
// i.e. the profit entirely on either 2 halves
P1 = max_profit(A, l, m)
P2 = max_profit(A, m + 1, r)

L_min = ∞, R_max = -∞
// case 3, the most profitable interval crosses the cut
// O(n)-time complexity 

// searching minimum value from the rightmost of the left portion to the leftmost of that portion
for k <- m down to l:
    if A[k] < L_min:
    L_min = A[k]

// searching maximum value from the leftmost of the right portion to the rightmost of that portion
for k <- m + 1 to r:
    if A[k] > R_max:
    R_max = A[k]
P3 = R_max - L_min

return max(P1, P2, P3)

````