---
aliases:
  - COMP3711 index
tags:
  - flashcard/active/algo
  - COMP3711
---

# COMP3711
- All the following will be typed by hand after I read and progress through:
  - lecture notes of HKUST COMP3711
  - HKUST COMP3711H materials prepared by professor Arya. 
  - https://amir.goharshady.com/teaching/honors-algorithms 
  - https://amir.goharshady.com/teaching/honors-discrete-math
# Lecture 1
## Overview of COMP3711H
- talks about something discussed earlier first:
  - asymptotics
  - summations
  - recurrences
  - sorting
  - basic graph algorithms (?)
- talks about algorithm design techniques:
  - [greedy](../../../notes/greedy-algorithms.md)
  - [dynamic programming](../../../notes/dp.md)
  -  augmentation-based methods (for network flow problems) (?)
- first half of the course talks about problems that can be solved efficiently
- second half would be on intractability and NP-hard problems (?)
  - basically problems that no efficient solutions were found
- finally, discuss methods to approximately NP-hard problems


## Algorithm
- what is an algorithm:
  - algorithm refers to a certain sequence computational steps, steps that be programmed, that receives some **inputs** and produces the corresponding desired **outputs** of the problem
## Design
- why do we want to design algorithms and study the art of doing so?
  - To develop efficient algorithms. Here are some common techniques includes:
    - [divide-and-conquer](../../../notes/divide-and-conquer.md)
    - [greedy](../../../notes/greedy-algorithms.md) 
    - [dynamic programming](../../../notes/dp.md)
  - To solve tricky combinatorics problem
### some issues
- we need to be concerned about the _correctness_ and _efficiency_ of algorithms 
## Analysis
- Complexity analysis
  - running time analysis:
    - T(n) : n being the _input size_ here. The worst-case number of steps to count primitive steps: (adding two numbers, multiplying two numbers, comparing two numbers etc.)
  - [Asymptotic analysis](../../../notes/asymptotic_analysis.md):
    - to identify promising solutions 

## Some mental notes on describing algorithm in COMP3711 
- present the algorithm
  - provide unambigious description to the algorithm
  - minimize obvious technical details
  - remember it will be read by human. Make things stupidly clear
- Prove its correctnenss
  - give a high-level view and justification of the algorithm. 
  - after that, talks about some tricky elements of the algorithm
- Analyze its efficiency
  - give a worst-case analysis of the algorithm (the running time analysis) 
  - might have solve some recurrences/summation