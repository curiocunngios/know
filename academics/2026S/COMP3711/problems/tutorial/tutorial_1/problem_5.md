---
aliases:
  - problem
  - tutorial problem 5
tags:
  - flashcard/active/algo
  - COMP3711
  - status/incomplete
---

# Problem 5
- exercise on running time of triple nested loops 
````cpp
for i = 1 to n
    for j = i to n
        for k = i to j
            do one unit of work
````
Prove that the above code do $\Theta(n^3)$ units of work. Use the fact that $\sum_{i = 1}^{n}{i^c} = \Theta{n^{c+1}}$

The total amount of work is:
$$
\sum_{i = 1}^{n}{\sum_{j = i}^{n}{\sum_{k = i}^{j}{1}}}
$$
