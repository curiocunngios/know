---
aliases:
  - problem
  - lecture notes 2 exercise 2a
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# Finding the last 0:
You are given an array $A[1. . n]$ that contains a sequence of 0 
followed by a sequence of 1 (e.g., 0001111111). $A$ contains at least 
one 0 and one 1.


(1) Design an $O(\log n)$-time algorithm that finds the position $k$ of 
the last 0, i.e., $A[k]$ = 0 and $A[k + 1]$ = 1.

# Solution
````cpp
find_last_0(A, l, r):
  if l > r: 
    return -1
  m = floor((l + r) / 2)
  if A[m] < A[m + 1]:
    return m
  if A[m] > A[1]:
    return find_last_0(A, l, m - 1)
  else:
    return find_last_0(A, m + 1, r)
````

## In c++:
````cpp
#include <iostream>
using namespace std;

int find_last_0(const int* A, int l , int r) {
    if (l > r) {
        return -1;
    }
    int m = (l + r) / 2;
    if (A[m] < A[m + 1]) {
        return m;
    }
    if (A[m] > A[1]) 
        return find_last_0(A, l, m - 1);
    else
        return find_last_0(A, m + 1, r);
}
int main() {
    int A[10] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1};
    int k = find_last_0(A, 0, 9);
    cout << k << endl;
    return 0;
}
````