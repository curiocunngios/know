---
aliases:
  - problem
  - lecture notes 2 probability
  - counting 3
tags:
  - flashcard/active/stat
  - MATH2411
  - status/completed
---

# Problem
- Now we draw two cards randomly at once, what is the probability that one of
the card is a Queen and the other is a heart?

# Solution 
$$
\frac{\overbrace{{3 \choose 1 } \times {13 \choose 1}}^{\text{non-heart queen}} + \overbrace{{1 \choose 1 } \times {12 \choose 1}}^{\text{heart queen chosen, -1 heart}}}{52 \choose 2}
$$