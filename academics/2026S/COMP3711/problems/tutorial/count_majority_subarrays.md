---
aliases:
  - problem
  - tutorial problem
  - count majority subarray
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# Problem 
- You are given an integer array nums and an integer target.
Return the number of subarrays of nums in which target is the majority
element.
The majority element of a subarray is the element that appears strictly
more than half of the times in that subarray.
Input: nums, target



- # Solution 
  - let $x$ be the target and $A$ be the original array
  - Create array $I$ with such that $I_i = 1$ if $A_i = x$, $I_i = -1$ if $A_i \neq x$ 
  - find # of subarray sum of $I$ such that the subarray sum $V_{ij} = I_i + I_{i+1} + \dots + I_j> 0$ which implies the count of target $x$ is majority
    - create a prefix sum $P$ on $I$
      - count # pairs $P[j] > P[i]$ for $j > i$ 
      - applies D&C inversion counting technique to recursively count # of such pairs described above