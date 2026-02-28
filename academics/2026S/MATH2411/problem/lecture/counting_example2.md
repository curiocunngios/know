---
aliases:
  - problem
  - lecture notes 2 probability
  - counting 2
tags:
  - flashcard/active/stat
  - MATH2411
  - status/completed
---

# Problem 
- A president and a treasurer are to be chosen from a student club
consisting of 50 people.
- How many different choices of officers are possible if
  - (a) there are no restrictions;
  - (b) A will serve only if he is president;
  - (c) B and C will serve together or not at all;
  - (d) D and E will not serve together?


# Solution 
- (a): $50 \times 49$
- (b): $\underbrace{1 \times 49}_{\text{A chosen}} + \underbrace{49 \times 48}_{\text{A not chosen}}$
- (c): $\underbrace{48 \times 47}_{\text{B, C not chosen}} + \underbrace{1 \times 2}_{\text{B, C chosen (different position)}}$
- (d) $\underbrace{1 \times 2 \times 48 \times 2}_{\text{D chosen or E chosen}} + \underbrace{48 \times 47}_{\text{D, E both not chosen}}$