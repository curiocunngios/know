---
aliases:
  - problem
  - leetcode Reverse bits
tags:
  - flashcard/active/algo
  - COMP3711
  - status/incompleted
---

# Reverse bits
Reverse bits of a given 32 bits signed integer

# Solution
- ## $O(1)$ algorithm:
    - use two loops $i$ from 0 to 31
      - one to collect the remainder and place them in reversed order into the array
      - the other multiplies by $2^i$
- ## Code
````cpp
reverseBits(x):
    create an array R of size 32
    for i <- 1 to 32:
        R[i] <- x mod 2
        x <- x / 2
    y <- 0

    // multiply in reversed order
    for i <- 31 downto 0:
        y <- y + R[i + 1] * 2^i
    
    return y
````

- ## C++ Implementations:
````cpp
class Solution {
public:
    int reverseBits(int n) {
        unsigned int ui = static_cast<unsigned int>(n); 
        bool R[32] = {};
        if (n < 0) { R[0] = 1; n = n * -1; }
        else { R[0] = 0; }
        for (int i = 0; i < 31; i++) {
            R[i] = ui % 2;
            ui = ui / 2;
        }

        unsigned int r = 0;

        for (int j = 31; j >= 0; j--) {
            r = r + R[j] * [](int x) -> int { unsigned int y = 1; while (x >= 1) { y *= 2; --x;} return y; } (31 - j);
        }
        return static_cast<int>(r);
    }
};
```