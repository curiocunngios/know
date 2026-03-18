---
aliases:
  - problem
  - collected problem
  - ss6
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# (SS6)
The following is the pseudo-code for a procedure known as BubbleSort  
for sorting an  
array of $n$ integers in ascending order.  

```
repeat
    swapped := false;
        for i = 1 to n-1
            if A[i] > A[i+1] then
                swap A[i] and A[i+1]
                swapped := true
until not(swapped)
```

- ## (a)
  - Prove that Bubble sort correctly sorts its input.  
- ## Solution
  - invariant: for the first $k$ times the for loop runs and finishes, it puts the $k$-th largest item to the $n - k + 1$ position
  - for an array of size 1, it is already sorted, so the invariant holds
  - assume that the invariant holds are some $k$
    - now on $k + 1$ times the for loop runs
    - it starts from $i = 1$, which is the beginning of the array, scans through to the end 
      - whenever an item is larger, it swaps it with the next item
      - then on the next iteration, $A[i]$ must be the larger one of the previous iteration
      - continue
      - since the invariant holds for $k$
        - now $A[n - k]$ must be the $k$-th largest. Which means  it is larger than any item before it. Then $A[i]$ would not be larger than it and would stop right before it
        - thus $A[i]$ now becomes the $k + 1$-th largest
        - the invariant holds
    - finally when the entire array is sorted. The main loop begins yet again, `swapped = false` but now every comparison `A[i] > A[i+1]` return false and `swapped` never turns true
    - the main loop thus ends

- ## (b)
  - What is the worst-case input for bubble sort? Use it to derive a lower bound on the  
time complexity of Bubblesort in the worst case.

- ## Solution
  - the answer is $Omega(n^2)$ because each runs of the entire for loop only guarantees to put one item to its correct position, there are $n$ items and the for loop runs for n iteration so it takes $O(n \times n) = O(n^2)$
  - using the worst case input as an example i.e. the array is in descending order:
    - the first item $A[1]$ requires $n - 1$ comparisons to reach to the end position
    - the second item $A[2]$ requires $n - 2$ comparisons to reach
    - and so on
    - so we have the summation $1 + 2 + 3 + \dots + n - 1 = n(n - 1)/2 = \Omega(n^2)$
 