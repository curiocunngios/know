---
aliases:
  - problem
  - lecture notes 1 exercise 2
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# Exercise 2 (U for cannot determine):
| Case | $T_A(n)$             | $T_B(n)$                        | Faster |
| :--- | -------------------- | ------------------------------- | ------ |
| 1    | $\Theta(n^{1.5})$    | $\Theta(n^2 / (\log{n})^3)$     |
| 2    | $O(n^{2})$           | $\Omega(2^{\sqrt{n}})$          |
| 3*   | $O(\log n)$          | $\Theta(2^{\log_2{\log_2{n}}})$ |
| 4    | $\Theta((\log n)^3)$ | $\Theta(\sqrt[3]{n})$           |
| 5    | $O(n^{4})$           | $O(n^3)$                        |
| 6    | $\Omega(n^{3})$      | $O(n^{2.8})$                    | 
| 7*   | $\Theta(n^{3})$      | $\Theta(4^{\log_5{n}})$         |

# Solution
| Case | $T_A(n)$             | $T_B(n)$                        | Faster | Comment                                                                                                                                                                                                              |
| :--- | -------------------- | ------------------------------- | ------ | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 1    | $\Theta(n^{1.5})$    | $\Theta(n^2 / (\log{n})^3)$     | A      | (0.5 is bigger than $(\log{n})^3$                                                                                                                                                                                    |
| 2    | $O(n^{2})$           | $\Omega(2^{\sqrt{n}})$          | A      | one's worst case is polynomial time and the other's best case is exponential time                                                                                                                                    |
| 3*   | $O(\log n)$          | $\Theta(2^{\log_2{\log_2{n}}})$ | U      | Note: base of logarithmic is important when it comes to exponential. Solving the logarithmic, we know that A is $O(\log n)$ and B is $\Theta(\log n)$. And A is upper bound. It might not be tight, so we don't know |
| 4    | $\Theta((\log n)^3)$ | $\Theta(\sqrt[3]{n})$           | A      | polynomial vs polylogarithmic                                                                                                                                                                                        |
| 5    | $O(n^{4})$           | $O(n^3)$                        | U      | We don't know if A's uper bound is tight or not                                                                                                                                                                      |
| 6    | $\Omega(n^{3})$      | $O(n^{2.8})$                    | B      | B's worst is better than A's best                                                                                                                                                                                    |
| 7*   | $\Theta(n^{3})$      | $\Theta(4^{\log_5{n}})$         | B      | Note: base of logarithmic is important when it comes to exponential. Solving the logarithmic, $T_B(n) = \Theta(n^{\log_5{4}})$ where the exponent is smaller than 1                                                  |