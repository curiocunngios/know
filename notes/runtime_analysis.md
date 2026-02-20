---
aliases:
  - runtime analysis 
  - running time analysis
  - runtime analysis of algorithm
  - running time analysis of algorithm
tags:
  - flashcard/active/algo
  - COMP3711
---

# Runtime analysis
- The runtime $T(n)$ of a [algorithm](./algorithm.md) over input sized $n$ is the number of **primitive** steps that the algorithm takes
  - i.e. addition, multiplication, comparison etc. 
- in the average(sometimes useful) / **worst**-case scenario.
  - best case scenario is often useless

## motivation
- we want the analysis to be machine-independent
  - therefore, we count the steps 