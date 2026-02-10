---
aliases:
  - problem
  - lecture notes 1 exercise 3
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# Exercise 3
- prove $\log{(n!)} = \Theta(n\log n)$


# Solution 
- proving $\log{(n!)} = O(n\log n)$:
$$\begin{aligned} 
\log{(n!)} 
&= \log{(n \cdot (n - 1) \cdot (n - 2) \cdot ... \cdot 2 \cdot 1)} \\
&\leq  \log{(n \cdot n \cdot n \cdot ...)} \\ 
&\leq  \log{(n^{n})} \\ 
&\leq  n\log{(n)} \\ 
&= O(n\log{n})
\end{aligned}$$
  - proving $\log{(n!)} = \Omega(n\log n)$:
$$\begin{aligned} 
\log{(n!)} 
&= \log{(n \cdot (n - 1) \cdot (n - 2) \cdot ... \cdot 2 \cdot 1)} \\
&\geq  \log{(\underbrace {n \cdot (n - 1) \cdot (n - 2) \cdot ... \cdot \frac{n}{2}}_{\text{There are } \frac{n}{2} \text{ terms here}})} \\
&\geq  \log{(\frac{n}{2} \cdot \frac{n}{2} \cdot \frac{n}{2} \cdot ... \cdot \frac{n}{2})} \\
&\geq  \log{(\frac{n}{2}^{\frac{n}{2}})} \\ 
&\geq  \frac{n}{2}\log{(\frac{n}{2})} \\ 
&\geq  \frac{n}{2}(\log{n} - \log{2}) \\ 
&\geq  \frac{1}{2}n\log{n} - \frac{1}{2}n\log{2} \\ 
&= \Omega(n\log{n})
\end{aligned}$$

- Therefore, $\log{(n!)} = \Theta(n\log n)$