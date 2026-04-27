---
aliases:
  - problem
  - tutorial problem
  - cloest pair of points
tags:
  - flashcard/active/algo
  - COMP3711
  - status/incomplete
---

# Cloest pair of points
- given $n$ points in the plane, find a pair with smallest euclidean distance between them


# Solution
- ## method 1
  - Check all pairs of points p and q with $O(n^2)$ comparisons

- ## method 2
  - use divide and conquer
  - divide: draw vertical line L so that roughl n/2 points on each side.
  - Conquer: find closest pair in each side recursively.
  - Combine: find closest pair with one point in each side.
  - return best of 3 solutions

  - Find closest pair with one point in each side, assuming that distance < 𝛿
      - Observation: only need to consider points within 𝛿 of line L.
      - Sort points in 2 𝛿 -strip by their y coordinate.
      - Only check distances of those within 7 positions in sorted list
        - why only 7 points to search?
          - 𝜹 × 𝟐𝜹 Search Window: We only care about points within vertical 𝛿 distance of point 𝑝.
          - Grid Partition: Dividing this window into 8 small squares, 𝛿/2 × 𝛿/2 each can contain at most one point (Pigeonhole Principle)
          - 𝜹 Constant-Time Scan: This limited density guarantees that checking only the next 7 neighbors in the y-sorted list is a safe upper bound to find the closest pair.

- pre-sort the points in $x$ -> $P_x$
- pre-sort the points in $y$ -> $P_y$
- split the points into two halves by the median of $P_x$
  - when go into the recursive calls, pass in $L_x, R_x$ splited by $P_x$ (by the median) and $L_y, R_y$ splited by $P_y$
    - specifically to get $L_y, R_y$ i.e. the array of points sorted by $y$ for left half and right half, we need to do it under $O(n)$ to check which part (left or right splited by median $x$) does every point in $P_y$ belongs to
