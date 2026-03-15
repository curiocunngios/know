- ## Understand the recursion structure of quicksort.
  - after partition, what are the two subproblems?
    - subproblem1: left half of the pivot (all elements smaller or equal to the pivot)
    - subproblem2: right half of the pivot (any elements > pivot)
  - what is the base case?
    - when `l` = `r`, that means there is only one element, thus no partition needed and return immediately
  - why does the recursion eventually stop?
    - because by keep partitioning and spliting the array, each subproblems eventually reaches leaves i.e. only one item and all would return immediately from there
  - why does solving the two subproblems sort the whole array?
    - because the quicksort algorithm always does one thing first: partitioning, and by partitioning, it effectively puts the chosen pivot at the correct position
    - then, it recursively jumps into two subproblems i.e. the left half and the right half splited by the pivot and both half are unsorted yet. Then it recursively sorts them by keep choosing a pivot and putting it into the right position
    - assuming that quicksort function sorts a certain subarray, by recursively calling quicksort of the left half and right half, it sorts them and by putting the pivot at the right position i.e. exactly between the left and right half, then the entire array is sorted

  - ## Understand the runtime cases of quicksort
    - what kind of split causes the worst case?
      - by always choosing the largest or smallest item as the pivot (unlikely if randomized) and splitting the array into:
        - A[l..m - 1] <= p (the rest of the entire array) (n - 1) items
        - A[m] = p (the pivot)
        - A[m + 1..r] = p (empty)
    - why does that lead to roughly quadratic time?
      - because if we somehow manage to always choose the largest item or smallest item as pivot, then:
        - the array would be partitioned into one half having $n - 1$ many items, the other half being empty
        - then the recurrence becomes: $T(n) = T(n - 1) + O(n)$ where $O(n)$ is the cost of partitioning in each recursive calls, the recurrence solves to $O(n^2)$
    - what kind of split causes the balanced case?
      - picking the median is the best, or anything close to the middle rank of the array
    - why does that lead to roughly n log n time?
      - because then that would split the array into roughly two equal halves:
      - which leads to the recurrence being roughly $T(n) = 2T(n/2) + O(n)$ which solves to n log n
    - why does randomization help avoid consistently bad splits?
      - that prevent the algorithm from picking the smallest or largest item because the probability of picking smallest or largest after randomization is low. The probability is roughly 2/n




- [ ] stage 3: practice
  - [ ] Trace quicksort on 2 small arrays immediately after learning it.
  - [ ] Write a short correctness explanation of 4 to 6 lines.