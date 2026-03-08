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
      - Only check distances of those within 11 positions in sorted list
        - why only 11 points to search?
          - 𝜹 × 𝟐𝜹 Search Window: We only care about points within vertical 𝛿 distance of point 𝑝.
          - Grid Partition: Dividing this window into 8 small squares, 𝛿/2 × 𝛿/2 each can contain at most one point (Pigeonhole Principle)
          - 𝜹 Constant-Time Scan: This limited density guarantees that checking only the next 11 neighbors in the y-sorted list is a safe upper bound to find the closest pair.