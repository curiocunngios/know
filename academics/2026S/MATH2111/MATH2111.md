---
aliases:
  - MATH2111 index
tags:
  - flashcard/active
  - MATH2111
---


# lecture 1
## Learning strategies:
(1) ask questions about a new math cncept using W's adnn H's.
(2) How do we learn abstractt math concept? Study examples thoroughly.
(3) Reflecting on new concept/method, comparing the new one with the old one.
## Q1
- what is a linear system?
    - It is a finite collection of linear equations
      - what is linear equations?
        - equations of unknown up to at most power of 1
## Q2
- What do we do with linear systems? 
  - we solve linear systems for all of the unknowns

## Q3
- How many different types of linear systems are there?
  - 3 categories according to their solutions structures.
    - (1) no solution
    - (2) unique solution
    - (3) infinitely many solutions 

## Q4
- What tools do we have to solve linear systems?
  - There are some algebraic weapons:
    - (1) Augmented matrices (square brackets with a bar separating the constant terms and unknown with their coefficients) (m * (n + 1))
    - (2) three elementary row operations:
      - (i) Scaling operations: cR_i --> R_i
      - (ii) Interchanging operations: R_i <---> R_j
      - (iii) Replacement operations: cR_i + R_j 
# Q5 
- How do we use augmented matrices and elementary row operations to solve linear systems? 
    - perform Gaussian elimination (row reduction algorithm) to produce a simple matrix which is called a reduced row echelon form (RREF)

### Definition
- Any matrix satifying 3 conditions below is called a row echelon form:
  - (1) All rows consisting of all entirely zero(s), of any, are gathered at the bottom of the matrix
  - (2) The leftmost non-zero entry of a given row is before the leftmost non-zero entry of th enext row.
  - (3) All entries in a column lying below the leftmost non-zero entry of a given row are all equal to zero.
- Any row echelon form satisfying 2 more requirements below is called a reduced REF
  - (4) The leftmost non-zero entry of a given row is equal to 1.
  - (5) All other entries in the column containing the leftmost non-zero entry of a given row are all equal to zero.




## Doing example 1:
- Things to do:
  - (1) Write down the augmented matrix of S.
  - (2) Perform Gaussian elimination.
- The algorithm:
  - (i) Search for the leftmost non-zero columnn. The top position is called a pivot position. Use the number at the pivot position to create zero(s) below it. The motivation is to fullfill the (3) requirement of the definition above.
  - (ii) Cover (ignore) all pivot rows and any rows above them, if any. Repeat step (i) on the submatrix obtained.
  - (iii) Repeat steps (i) and (ii) until no more pivot position can be obtained
  - (iv) Work backward from the rightmost pivot to the leftmost pivot to create zeros above them

### Remarks (reflection):
#### Q1
- What is good for us to use the augmented matrices to solve linear systems?
  - In Secondary school, we learnt an old method: The method of elimination. Using augmented matrices can save us time from repeatedly writing out unknowns throughout process

#### Q2
- What special about elementary row operations can we say?
  - No matter which elementary row operations we perform, they do not alter the solution set of the concerned linear system 
