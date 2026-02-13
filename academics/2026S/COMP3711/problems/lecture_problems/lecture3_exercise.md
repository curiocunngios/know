---
aliases:
  - problem
  - lecture notes 3 exercise
tags:
  - flashcard/active/algo
  - COMP3711
  - status/incompleted
---

# Recursion tree
- Algorithm $A$ solves problems of size $n$ by dividing them into 5 subproblems of size $n/2$, recursively solving each subproblem, and then combining the solutions in $O(n)$ time.
- Algorithm $B$ solves problems of size $n$ by recursively solving 2 subproblems of size $n - 1$ and then combining the solutions in constant time
- Algorithm $C$ solves problem of size $n$ by dividing them into 9 subproblems of size $n/3$. Recursively solving each subproblem and then combining the solutions in $O(n^2)$ time

Analyse the running time of these algorithms (in big-O notation) using the recursion tree approach. Determine which is the best algorithms asymptotically