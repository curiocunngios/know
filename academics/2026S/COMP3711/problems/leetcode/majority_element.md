---
aliases:
  - problem
  - leetcode majority element
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# Majority element
given an array of size $n$, return the majority element. The majority element is the element that appears more than `⌊n / 2⌋` times.

# Solution
## sorting and counting 
- merge sort the array first
- use a single for loop to loop through the sorted array and count the number of each $A[i]$, find the $A[i]$ that gives the max count 
- time complexity should be $O(n\log n)$

## for loop + search 
- for $i$ <- 0 to $n$, use a recursive D&C search and count each $A[i]$ in the array
# Code
- for loop + search 
````cpp

// Complexity of count function -> O(n)
count(A, l, r, x):
    if (l > r):
        return 0
    m <- (l + r) / 2
    if (A[m] = x):
        return 1 + count(A, l, m - 1, x) + count(A, m + 1, r, x)
    else: 
        return count(A, l, m - 1, x) + count(A, m + 1, r, x)

// n * n = O(n^2) time complexity
find_majority(A, n):
    max_count = 0
    for i <- 1 to n:
        count = count(A, 1, n, A[i])
        if (count > max_count):
            max_count = count
    return max_count

````

````cpp
// time limit exceeded...
class Solution {
public:
    int count(vector<int>& A, int l, int r, int x) {
        if (l > r)
            return 0;
        int m = (l + r) / 2;
        // cout << l << ", " << m << ", " << r << endl;
        if (A[m] == x)
            return 1 + count(A, l, m - 1, x) + count(A, m + 1, r, x);
        else 
            return count(A, l, m - 1, x) + count(A, m + 1, r, x);
    }
    int majorityElement(vector<int>& nums) {
        int max_count = 0, count = 0, max_index = -1;
        for (int i = 0; i < nums.size(); i++) {
            count = count(nums, 0, nums.size() - 1, nums[i]);
            if (count > max_count) {
                max_count = count;
                max_index = i;
            }
        }
        return nums[max_index];
    }
};
````

# Code
- merge sort + count:
````cpp
merge(A, l, r):
    create two arrays L and R
    L <- A[1..m], R <- A[m + 1..r]
    append ∞ to both arrays
    i <- 0, j <- 0
    for k <- l to r:
        if (L[i] < R[j]):
            A[k] <- L[i]
            i <- i + 1
        else:
            A[k] <- R[j]
            j <- j + 1
    
merge_sort(A, l, r):
    if (l >= r):
        return 
    m <- floor((l + r) / 2)
    merge_sort(A, l, m)
    merge_sort(A, m + 1, r)
    merge(A, l, m, r)

find_majority(nums, n):
    if (n = 1):
        return A[n]
    merge_sort(nums, 1, n)
    max_count <- 0, count <- 1, max_index <- -1
    for i <- 2 to n:
        if (A[i] = A[i - 1]):
            count <- count + 1
        else:
            count <- 1
        if (count > max_count):
            max_count <- count
            max_index <- i
    return A[max_index]
````

## in actual c++
````cpp
class Solution {
public:
    void merge(vector<int>& A, int l, int m, int r) {
        
        // create two arrays L and R
        vector<int> L(m - l + 1); vector<int> R(r - (m + 1) + 1);
        for (int i = 0; i < (m - l + 1); ++i) {
            L[i] = A[l + i];
        }
        // L <- A[l..m], R <- A[m + 1..r]
        for (int i = 0; i < (r - (m + 1) + 1); ++i) {
            R[i] = A[m + 1 + i];
        }
        
        
        // append -∞ to both arrays (deleted this part as this can't be done for integers)
        int i = 0, j = 0, k = l;
        for (; k < (r + 1) && i < (m - l + 1) && j < (r - (m + 1) + 1); ++k)
            if (L[i] < R[j]) {
                A[k] = L[i];
                ++i;
            }
            else {
                A[k] = R[j];
                ++j;
            }
        
        // a potential leftover item in the 
        while (i < (m - l + 1)) {
            A[k++] = L[i++];
        }
        while (j < (r - (m + 1) + 1)) {
            A[k++] = R[j++];
        }
    }
        
    void merge_sort(vector<int>& A, int l, int r) {
        if (l >= r)
            return;
        int m = (l + r) / 2;
        merge_sort(A, l, m);
        merge_sort(A, m + 1, r);
        merge(A, l, m, r);
    }

    int majorityElement(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[nums.size() - 1];
        merge_sort(nums, 0, nums.size() - 1);
        int max_count = 0, count = 1, max_index = -1;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                ++count;
                cout << count << endl;
            }
            else
                count = 1;
            if (count > max_count) {
                max_count = count;
                max_index = i;
            }
        }
        return nums[max_index];
    }
           
};
````