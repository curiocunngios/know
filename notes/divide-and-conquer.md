---
aliases:
  - divide-and-conquer
  - D&C
tags:
  - flashcard/active/algo
  - COMP3711
---

# divide-and-conquer
- recursively breaks down a problem into smaller problems called the sub-problems
- make sure the sub-problems become small enough to be able to solved directly
- finally combine the solved sub-problems to form the final solution of the original problem

# Examples:
- [binary search](./binary_search.md)
  - there's no "combining" step
  - it returns the result directly up to the top level of the recursion
- [Tower of Hanoi](./tower_of_hanoi.md) 
  - similarly, the "combining" step is implicit/trivial
- [merge sort](./merge_sort.md)