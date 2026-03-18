---
aliases:
  - problem
  - collected problem
  - ss5
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# (SS5) 
Your input is $k$ sorted lists that need to be merged into one sorted list. The “obvious”  
solution is to modify the merging procedure from mergesort; at every step, compare the  
smallest items from each list and move the minimum one among them to the sorted list.  

Finding the minimum value requires $O(k)$ time so, if the lists contain $n$ items in total the  
full $k$-way merge would take $O(nk)$ time.  

This can be solved faster.  

Design an $O(n \log k)$-time algorithm to merge $k$ sorted lists into one sorted list  
by making use of priority queues.  

Note that each sorted list may contain a different number of elements.

- # Solution
  - create array A to store the font items of each array: A[1..k] (takes O(k) to copy)
  - heapify A (takes O(klogk) or O(k))
  - extract-min on A  -> gets r
    - put it into the result array R
  - insert new item to A from the array where the r came from (O(log k))
  - overall: O(n log k)