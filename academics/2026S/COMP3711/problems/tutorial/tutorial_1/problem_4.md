---
aliases:
  - problem
  - tutorial problem 4
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# Problem 4 (U for undetermined)

| Case  |                  $T_A(n)$                   |             $T_B(n)$             | Faster |
| :---: | :-----------------------------------------: | :------------------------------: | :----: |
|   0   |         $\Theta(n^{\frac{11}{10}})$         |    $\Theta(n(\log n)^{100})$     |    B    |
|   1   |            $\Theta(\log \log n)$            | $\Theta((\log n)^{\frac{1}{5}})$ |    A    |
|   2   |    $\Theta(\sum_{i=1}^{n} \frac{1}{i})$     |         $\Theta(\log n)$         |   U (same)     |
|   3   | $\Omega(\sum_{i=1}^{\infty} \frac{1}{2^i})$ |              $O(n)$              |    U (for A the lower bound is a constant, (b) the upper bound is $n$, we don't know which is faster    |