---
aliases:
  - Big-O notation
  - asymptotic O-notation
tags:
  - flashcard/active/algo
  - COMP3711
---

# Big-O
- a mathematical notation that describes the approximate size of a function on a domain (input).
- also known as asymptotic O-notation
- In computer science, big O notation is used to classify algorithms according to how their run time or space requirements grow as the input size grows.

# Definition
- when we say $f(n) = O(g(n))$
- it is read as "$f$ is big $O$ of $g(n)$"
- it means there exists a constant $c > 0$ and $n_0 > 0$ 
- such that $c \cdot g(n) \geq f(n)$ for all $n > n_0$
  - the constant $c$ allows ignoring constant multiplicative and additive factors
    - Example: $2n$ is $O(n)$ with the constant $c = 2$
# Properties
## Product
$$ 
f_1 = O(g_1) \text{ and } f_2 = O(g_2) \text{ then } \newline 
f_1 \cdot f_2 = O(g_1 \cdot g_2) \newline \newline 
\text{let } f \text{ be a function} \newline
f \cdot O(g) = O(\left| f\right| \cdot g)  
$$
## Sum 
$$ 
f_1 = O(g_1) \text{ and } f_2 = O(g_2) \text{ then } \newline 
f_1 + f_2 = O(\text{max}(g_1, g_2))
$$

## Multiplication by constant
- basically does nothing
$$
\text{if } f = O(g), \newline
\text{then } k \cdot f = O(g)
$$

