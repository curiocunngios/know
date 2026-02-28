---
aliases:
  - problem
  - lecture notes 2 probability
  - basic 
tags:
  - flashcard/active/stat
  - MATH2411
  - status/completed
---

# Problem
- throw 2 dice. What is the probability that the sum of them are 7

# Solution
- ## method 1 (counting)
  - Total sample space (all combinations) $=6 \times 6 = 36$ where first 6 is the number of choices of the first number, second 6 is the number of choices of the second number
  - since 7 can be a sum of $(1, 6), (2, 5), (3, 4)$ and their position can be swapped: $(6, 1), (5, 2), (4, 3)$ which means the for example 6 and 1 are displayed on different dice: we can get 1 on first dice and 6 on second dice. OR, we get 6 on first dice and 1 on second dice.
  - So the number of possibiliies of the **event** (sum is 7) is $2 \times 3 = 6$ where the number 2 indicates the additional duplicates (for swapping position) for every 3 choices that sum to 7
  - therefore the probability is 
>  $$
>  \frac{2 \times 3}{6 \times 6} = \frac{1}{6}
>  $$
- ## method 2 (also counting but wrong)
  - again we need $(1, 6), (2, 5), (3, 4)$
  - probability of getting 1 is 1/6, probability of getting 6 is also 1/6
  - same applies for $(2, 5), (3, 4)$
  - so the probability of sum of 7 is $1/6 \times 1/6 \times 3 = 1/12$ 
  - ok this method is wrong and I feel so stupid 
  - to think about this:
    - I said: probability of getting 1 is 1/6, probability of getting 6 is also 1/6
    - and then I multiplied two 1/6 = 1/36
    - that is exactly the probability of one single pair in $(1, 6), (2, 5), (3, 4)$
    - in fact, according to method 1 written by myself, there are **6** pairs considering swapping the positions
- ## method 3
  - again the pairs we need for sum to be 7 are $(1, 6), (2, 5), (3, 4)$
  - the set of possible first number of choice is $\{1, 2, 3, 4, 5, 6\}$ so probability is 6/6 = 1
  - the allowed second number depends on the first number, if the first number is 1, then the second number has to be 6, if the first number is 2 the second has to be 5
  - so for any result of the first throw, there is only one allowed choice on the second throw os the probability of the second throw is 1/6
  - $1 \times 1/6 = 1/6$