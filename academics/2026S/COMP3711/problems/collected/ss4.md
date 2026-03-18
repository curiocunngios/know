---
aliases:
  - problem
  - collected problem
  - ss4
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

## (SS4)
- ## (a)
- Illustrate how Mergesort would work on input $[1,2,3,4,5,6,7,8,9]$.  
- ## Solution
````
A = [1,2,3,4,5,6,7,8,9]

MS(A, 1, 9), m = (1 + 9) / 2 = 5

MS(A, 1, 5), m = (1 + 5) / 2 = 3

MS(A, 1, 3), m = (1 + 3) / 2 = 2

MS(A, 1, 2), m = (1 + 2) / 2 = 1

MS(A, 1, 1) returns
MS(A, 2, 2) returns
Merge(A, 1, 2):
[1] + [2] = [1, 2]
returns

MS(A, 3, 3) returns
Merge(A, 1, 3):
[1, 2] + [3] = [1, 2, 3]
returns 

MS(A, 4, 5), m = (4 + 5) / 2 = 4

MS(A, 4, 4) returns
MS(A, 5, 5) returns

Merge(A, 4, 5):
[4] + [5] = [4, 5]
returns

Merge(A, 1, 5):
[1, 2, 3] + [4, 5] = [1, 2, 3, 4, 5]

MS(A, 6, 9), m = (6 + 9) / 2 = 7

MS(A, 6, 7), m = 13/2 = 6
MS(A, 6, 6) returns
MS(A, 7, 7) returns

Merge(A, 6, 7):
[6] + [7] = [6, 7]

MS(A, 8, 9), m = 17/2 = 8

MS(A, 8, 8) returns
MS(A, 9, 9) returns

Merge(A, 8, 9):
[8] + [9] = [8, 9]
returns

Merge(A, 6, 9):
[6, 7] + [8, 9] = [6, 7, 8, 9]

Merge(A, 1, 9):
[1, 2, 3, 4, 5] + [6, 7, 8, 9] = [1, 2, 3, 4, 5, 6, 7, 8, 9]
returns

````
- ## (b)
- Illustrate how Mergesort would work on input $[9,8,7,6,5,4,3,2,1]$.  

````
[9,8,7,6,5,4,3,2,1] -> [9, 8, 7, 6, 5] | [4, 3, 2, 1]
                    -> [9, 8, 7] | [6, 5] | [4, 3] | [2, 1]

                    -> [9, 8] | [7] | [6] | [5] | [4] | [3] | [2] | [1]

                    -> [9   ] | [8] | [7] | [6] | [5] | [4] | [3] | [2] | [1]


merge:
[9] + [8] -> [8, 9]
[8, 9] + [7] -> [7, 8, 9]
[6] + [5] -> [5, 6]
[7, 8, 9] + [5, 6] -> [5, 6, 7, 8, 9]
[4] + [3] -> [3, 4]
[2] + [1] -> [1, 2]
[3, 4] + [1, 2] -> [1, 2, 3, 4]

[5, 6, 7, 8, 9] + [1, 2, 3, 4] -> [1, 2, 3, 4, 5, 6, 7, 8, 9]

````

- ## (c) 
- Illustrate how Quicksort would work on input $[1,2,3,4,5,6,7,8]$.  
Assume that the last item in the subarray is always chosen as the pivot.  

- ## Solution
  - QS(A, 1, 8) runs
  - m = partition(A, 1, 8) runs
    - Quicksort choose last item:8 as the pivot
    - partite the array into two halves:
      - left half: all smaller or equal to 8
      - right half: all larger than 8 
      - puts the pivot: 8 at the final correct position, which is still at position 8 (1-based indexing), so remains unchange
      - returns the index of the pivot, which is 8
  - m = 8
  - QS(A, 1, 7) runs
    - m = partition(A, 1, 7)
      - does the same thing as above
    - m = 7
    - QS(A, 1, 6) runs
      - does the same thing
    - QS(A, 7, 6) runs
      - immediately returns
  - QS(A, 9, 8) runs
    - immediately returns
  - finally, the original array returns with no swapping done at all
- ## (d)
- Illustrate how Quicksort would work on input $[8,7,6,5,4,3,2,1]$.  
Assume that the last item in the subarray is always chosen as the pivot.

- ## Solution
````
original array A = [8,7,6,5,4,3,2,1]
QS(A, 1, 8), pivot = 1
[1,7,6,5,4,3,2,8]
m = 1

QS(A, 1, 0) returns

QS(A, 2, 8), pivot = 8
[1,7,6,5,4,3,2,8]
m = 8

QS(A, 2, 7), pivot = 2
[1,2,6,5,4,3,7,8]
m = 7

QS(A, 2, 6), pivot = 3
[1,2,3,5,4,6,7,8]
m = 6

QS(A, 2, 5), pivot = 4
[1,2,3,4,5,6,7,8]
m = 5

QS(A, 2, 4), pivot = 4
[1,2,3,4,5,6,7,8]
m = 4

QS(A, 2, 3), pivot = 3
[1,2,3,4,5,6,7,8]
m = 3

QS(A, 2, 2) returns

QS(A, 3, 3) returns

QS(A, 2, 3) returns

QS(A, 3, 4), pivot = 4
[1,2,3,4,5,6,7,8]
m = 3

QS(A, 3, 3) returns
QS(A, 4, 4) returns
QS(A, 2, 4) returns 
...
all the above previous recursive calls returns without making further changes to the array
````