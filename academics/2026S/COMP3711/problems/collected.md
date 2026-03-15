# Sorting and Searching (SS)

## (SS1)
$a_1, a_2, \dots, a_n$ is a sequence that has the following property:  
There exists some $k$ such that  

$\forall i : 1 \leq i < k, a_i > a_{i+1}$  
$\forall i : k \leq i < n, a_i < a_{i+1}$.  

Such a sequence is unimodal with unique minimum $a_k$.  
Design an $O(\log n)$ algorithm for finding $k$.

## (SS2)
You are given an (implicit) infinite array $A[1, 2, 3\dots]$.  
and are told that, for some unknown $n$, the first $n$ items in the array are positive integers  
sorted in increasing order while, for $i > n$, $A[i] = \infty$.  

Give an $O(\log n)$ algorithm for finding the largest non-$\infty$ value in $A$.

## (SS3)
Consider the heap implementation of a Priority Queue shown in class that keeps its items  
in an Array $A[]$.  

Let Decrease-Key$(i, x)$ be the operation that compares $x$ to $A[i]$ :  

If $x \geq A[i]$ it does nothing.  
If $x < A[i]$, it sets $A[i] = x$ and, if necessary, fixes $A[]$ so that it remains a Heap.  

Show how to implement Decrease-Key$(i, x)$ in $O(\log n)$ time, where $n$ is the  
number of items in the Heap.  

Note: We will use the operation Decrease-Key$(i, x)$ later in the semester.

## (SS4)
(a) Illustrate how Mergesort would work on input $[1,2,3,4,5,6,7,8,9]$.  

(b) Illustrate how Mergesort would work on input $[9,8,7,6,5,4,3,2,1]$.  

(c) Illustrate how Quicksort would work on input $[1,2,3,4,5,6,7,8]$.  
Assume that the last item in the subarray is always chosen as the pivot.  

(d) Illustrate how Quicksort would work on input $[8,7,6,5,4,3,2,1]$.  
Assume that the last item in the subarray is always chosen as the pivot.

## (SS5)
Your input is $k$ sorted lists that need to be merged into one sorted list. The “obvious”  
solution is to modify the merging procedure from mergesort; at every step, compare the  
smallest items from each list and move the minimum one among them to the sorted list.  

Finding the minimum value requires $O(k)$ time so, if the lists contain $n$ items in total the  
full $k$-way merge would take $O(nk)$ time.  

This can be solved faster.  

Design an $O(n \log k)$-time algorithm to merge $k$ sorted lists into one sorted list  
by making use of priority queues.  

Note that each sorted list may contain a different number of elements.

## (SS6)
The following is the pseudo-code for a procedure known as BubbleSort  
for sorting an  
array of $n$ integers in ascending order.  

```
repeat
swapped := false;
for i = 1 to n-1
if A[i] > A[i+1]
then
swap A[i] and A[i+1]
swapped := true
until
not(swapped)
```

(a) Prove that Bubble sort correctly sorts its input.  

(b) What is the worst-case input for bubble sort? Use it to derive a lower bound on the  
time complexity of Bubblesort in the worst case.

## (SS7)
An array $A[1 \dots n]$ is circularly sorted if there exists some $k \in [1 \dots n]$ such that $A[k \dots n]$  
concatenated to $A[1 \dots k -1]$ is sorted. As an example  

$A = [30, 40, 55, 10, 18, 24, 27, 28]$  

is circularly sorted with $k = 4$.  

How can you modify the binary search algorithm to search for an item in $A$ in $O(\log n)$  
time.  

Note: To simplify the problem, assume that all of the items in $A$ are unique (no duplicates).

## (SS8) Heapify
In class, we learned how to maintain a min-heap implicitly in an array.  
Given that $A[i \dots (j -1)]$ represents an implicit min-heap, we saw how to add $A[j]$ to the  
min-heap , in $O(\log j)$ time.  
This led to an $O(n \log n)$ algorithm for constructing a min-heap from array $A[1, \dots , n]$.  

For this problem show how to construct a min-heap from an array $A[1 \dots n]$ in  
$O(n)$ time.  

It might help to visualize the min-heap as a binary tree and not an array.  

For simplification, you may assume that $n = 2^{k+1}-1$ for some $k$, i.e., the tree is complete.  

Hint: Consider “heapifying” the nodes processing them from bottom to top.

## (SS9)
There are $n$ items in an array. It is easy to see that that their minimum can be found  
using $n -1$ comparisons and that $n -1$ are actually required. It is also easy to see that  
finding the max can similarly be done using $n -1$ comparisons with $n -1$ required.  

Design an algorithm that finds both the minimum and the maximum using at  
most $\frac{3}{2}n + c$ comparisons, where $c > 0$ can be any constant you want.  

Note: Although it is harder to prove, $\frac{3}{2}n + c$ comparisons is actually a lower bound.

## (SS10)
You are given an input containing $n/k$ lists:  

(i) Each list has size $k$, and  

(ii) for $i = 1$ to $n/k$, the elements in list $i - 1$ are all less than all the elements in list $i$  

The simple algorithm to fully sort these items is to sort each list separately and then concatenate the sorted lists together. This uses $\frac{n}{k}O(k \log k) = O(n \log k)$ comparisons.  

Show that this is the best possible. That is, show that any comparison-based sorting algorithm to sort the $n/k$ lists into one sorted list with $n$ elements will need to make at least $\Omega(n \log k)$ comparisons.  

Note that you can not derive this lower bound by simply combining the lower bounds for the individual lists.

## (SS11)
Prove that insertion in a binary search tree requires at least $\Omega(\log n)$ comparisons (in the worst case) per insertion, where $n$ is the number of items in the search tree.  

Hint: What lower bounds have we learned in class? Suppose you built the search tree using insertions. What can you do with it?

## (SS12)
Build a Binary Search Tree for the items 8, 4, 6, 13, 3, 9, 11, 2, 1, 12, 10, 5, 7 and draw the final tree.  

Now, delete 3, 9, 4 in order and draw the resulting trees.

## (SS13)
The figure below shows part of the decision tree for mergesort operating on a list of 4  
numbers, $a_1, a_2, a_3, a_4$.  

Expand subtree $T_3$, i.e., show all the internal (comparison) nodes and leaves  
in subtree $T_3$.  

(Note: There is a figure here showing the partial decision tree with subtrees T1, T2, T3, T4.)

## (SS14)
The maximum item in a set of $n$ real-valued keys is well defined. The maximum item in  
a set of $n$ 2-dimensional real-valued points is not.  

One definition that is used in database theory is that of *skyline vectors*. These are also  
known as *maximal points* or *maximal vectors*.  

Let $S = \{p_1, p_2, \dots, p_n\}$ be a set of 2-d points where $p_i = (x_i, y_i)$. A point $p \in S$ is a *skyline vector* if no other point is bigger than it in both $x$ and $y$ dimensions.  

Formally $p_j$ dominates $p_i$ if  

$x_i < x_j$ and $y_i < y_j$.  

$p = (x, y)$ is a *skyline vector* in $S$ if no $p_i$ in $S$ dominates $p$.  

In the example below, the 3 filled points are the skyline ones.  

(Note: There is a figure here showing points with 3 filled as skyline.)

(a) Give an algorithm that finds the skyline vectors in a set $S$ of $n$ points in  
$O(n \log n)$ time.  

(b) Suppose that the points all have integer coordinates in the range $[1, \dots, n^2]$. Give an  
$O(n)$ algorithm for solving the same problem.

## (SS15) AVL Trees
(a) Construct an AVL tree by inserting the items 134625 in that order.  
Next construct another AVL tree on those items by inserting in the order 123456. Do they have the same height? Now construct an AVL tree by inserting the items 5362471 in that order and another by inserting 4261357 in that order. Do those two trees have the same height?  

(b) What are the minimum and maximum heights for an AVL tree with 88 nodes labelled 1, 2, 3, ..., 88?

## (SS16) Sorting Polynomially Bounded Integers
In this problem, you are given $n$ integers to sort.  

(a) You are told they are all in the range $[0, n^2 -1]$. How fast can you sort them?  

(b) Now you are told they are all in the range $[0, n^t -1]$ for some fixed $t$. How fast can  
you sort them?

## (SS17) Lower Bound on the EPFL of Binary Trees
The proof (in COMP3711H) that comparison-based sorting algorithms require $\Omega(n \log n)$  
comparisons on average used the fact that the External Path Length of a binary tree with  
$n$ leaves is at least $n \log_2 n + O(n)$. Prove this fact.

## (SS*1) Extra Problem. The limits of comparison-based lower bounds
The purpose of this problem is to illustrate that lower bounds in comparison-based models  
can completely fail in other models.  

Let $S = \{x_1, x_2, \dots, x_n\}$ be a set of integers or real numbers. Let $y_1, y_2, \dots, y_n$ be the  
same numbers sorted in increasing order. The MAX-GAP of the original set is the value  

$\max_{1\leq i <n}(y_{i+1} - y_i)$.  

As an example, if $S = \{3, 12, 16, 7, 13, 1\}$, sorting the items gives 1, 3, 7, 12, 13, 16 and the  
MAX-GAP is $12 -7 = 5$.  

Using a more advanced form of the $\Theta(n \log n)$ proof of the lower bound for sorting it can be  
proven that calculating MAX-GAP requires $\Theta(n \log n)$ operations if only comparisons and  
algebraic calculations are used. In this problem, we will see that, if the floor (truncate)  
operator $\lfloor x \rfloor$ can also be used, the problem can be solved using only $O(n)$ operations!  

Before reading the solution below, try to see if you can solve it yourself!  

- Find $y_1$ and $y_n$, the minimum and maximum values in $S$.  

- Let $\Delta= \frac{y_n - y_1}{n-1}$. Let $B_i$ be the half-closed half-open interval defined by  

$B_i = [y_1 + (i -1)\Delta, y_1 + i\Delta)$  

for $i = 1, 2, \dots n -1$ and set $B_n = \{y_n\}$.  

- Prune $S$ as follows. For every $B_i$ throw away all items in $S \cap B_i$ except for the  
smallest and largest. Let $S'$ be the remaining set.  

- Find the Max-Gap of $S'$ by sorting $S'$ and running through the items in $S'$ in sorted  
order. Output this value  

Prove that this algorithm outputs the correct answer and show that every  
step can be implemented in $O(n)$ time (the 3rd step might require the use of  
the floor function).

## (SS*2) AVL Trees
Given any specific insertion order on $n$ keys the output is a specific AVL tree. Recall  
that a tree $T$ is an AVL tree if it satisfies the local balance condition at every node. This  
doesn’t a-priori imply that every possible AVL tree can be constructed via insertions.  

Suppose $T$ is some tree on $n$ keys that satisfies the AVL balance condition.  

Is there always an insertion order that of the keys that builds $T$? If yes, show one; if no,  
show a counterexample.

# Randomization (R)

## (R1)
Consider the Hire-Assistant algorithm described in the lecture notes.  

Assume that the candidates are presented in a random order.  
The analysis in the lecture notes calculated the Expected number of hires. For this problem  
calculate:  

(a) the probability that you hire exactly one person.  

(b) the probability that you hire exactly $n$ people.

## (R2)
Use indicator random variables to solve the following, known as the hat-check problem.  

Each of $n$ customers gives a hat to a hat-check person at a restaurant.  

The hat-check person gives the hats back to the customers in a random order.  

What is the expected number of customers who get back their own hat?  

Note: Replacing hats with homeworks and customers with students gives the following  
equivalent question: suppose that there are $n$ students in a class who have just submitted  
their homework. The teacher gives the homeworks back to the students in a random order  
and asks the students to mark the homework they have been handed. What is the expected  
number of students who have been asked to mark their own homework?

## (R3) Another Analysis of Randomized Selection
We learned the Randomized Selection  
algorithm and used a geometric series analysis approach to show that it runs in $O(n)$  
expected time.  

In this problem you will rederive the $O(n)$ time in a different way, using the Indicator  
Random Variable method used to analyze Quicksort in the COMP3711 lectures.  

Recall the Randomized Selection algorithm to find the $k$-th smallest element.  

Pick a random pivot, divide the array into 3 parts:  

left subarray, pivot item, right subarray.  

We then either stop immediately or recursively solve the problem in the left OR the right  
part of the array.  

- As in quicksort, denote the elements in sorted order by $z_1, \dots, z_n$  
(so we are searching for $z_k$)  

- We use the same random model for choosing the pivot as for quicksort.  

I) Define  

$X_{ij} = \begin{cases} 1 & \text{if } z_i \text{ and } z_j \text{ are compared by the algorithm} \\ 0 & \text{otherwise} \end{cases}$  

Prove the following three facts  

(a) $i \leq k \leq j$: $\Pr[X_{ij} = 1] = 2/(j - i + 1)$.  

(b) $i < j < k$: $\Pr[X_{ij} = 1] = 2/(k - i + 1)$.  

(c) $k < i < j$: $\Pr[X_{ij} = 1] = 2/(j - k + 1)$.  

(II) By the indicator random variable technique, the expected total number of comparisons  
is $\sum_{i<j} E[X_{ij}] = \sum_{i<j} \Pr[X_{ij} = 1]$  

Use this to show that $\sum_{i<j} E[X_{ij}] = O(n)$.

## (R4) Quicksort with repeated elements
The discussion of the expected running time of randomized quicksort in the COMP3711  
lecture notes assumed that all element values are distinct. In this problem, we examine  
what happens when they are not.  

(a) Suppose that all element values are equal. What would randomized quicksort’s  
running time be ?  

(b) The Partition procedure taught returns an index $q$ such that each element of  
$A[p\dots q -1]$ is less than or equal to $A[q]$ and each element of $A[q + 1\dots r]$ is greater  
than $A[q]$.  

Modify Partition to produce a new procedure Partition'$(A, p, r)$, which permutes  
the elements of $A[p\dots r]$ and returns two indices $q, t$, where $p \leq q \leq t \leq r$, such that  

- all elements of $A[q\dots t]$ are equal,  
- each element of $A[p\dots q -1]$ is less than $A[q]$, and  
- each element of $A[t + 1\dots r]$ is greater than $A[q]$  

Like Partition, your Partition' procedure should take $\Theta(r - p)$ time.  

(c) Modify the Quicksort procedure to produce Quicksort'$(A, p, r)$ that calls Paritition'  

but then only recurses on $A[p, q -1]$ and $A[t + 1, r]$.  

Problem (R*3) will discuss how to analyze this new algorithm

## (R5)
Let $A[1..n]$ be an array of $n$ distinct numbers.  
In class we said that if $i < j$ and $A[i] > A[j]$, then the pair $(i, j)$ is called an inversion  
of $A$.  

Suppose that the elements of $A$ form a uniform random permutation of $\langle 1, 2, \dots, n \rangle$.  

Use indicator random variables to compute the expected number of inversions.

## (R*1) Extra Problem.
You are given $n$ pairs of nuts and bolts  

$(N_1, B_1), (N_2, B_2), \dots , (N_n, B_n)$.  

Each pair is a different size than the others. Someone has unscrewed all of the nuts off of  
the bolts and mixed them up.  

Problem: Match all nuts up with their corresponding bolts.  

If we could separately  
(i) sort all the bolts by increasing size and then  
(ii) sort all the nuts by increasing thread size  
$\Rightarrow$ problem would be easily solvable in $O(n \log n)$ time.  

After sorting, just match them up in order from smallest to largest. The difficulty is that  
we can't do this because we can't compare the sizes of two nuts directly or the sizes of  
two bolts directly.  

The only operation available is to try to screw a bolt $B$ into a nut $N$ and then, by seeing  
whether the bolt  

- (a) goes loosely in,  

- (b) perfectly fits or  

- (c) can't go in at all,  

decide whether their thread sizes satisfy  

(a) $B < N$, (b) $B = N$ or (c) $B > n$.  

Design an $O(n \log n)$ time randomized algorithm for matching nuts and bolts.  

Hint: Try to modify Quicksort.

## (R*2) Extra Problem. Randomized Binary Search Trees
- Consider a Binary search tree $T$ on $n$ keys.  
The depth, $d(v)$, of $v$ in $T$ is the length of the path from the root of $T$ to $v$. Note  
that the depth of the root is 0. The Path Length of $T$, $PL(T)$, is the sum of the  
depths of all of the nodes of $T$; $PL(T) = \sum_{v\in T} d(v)$.  

Note that $\frac{1}{n}PL(T)$ is the average depth of a node in the tree. This is also the average  
time to search for a randomly chosen node in the tree.  

- Suppose that every key $K_i$ in a set of $n$ keys has real weight $w_i$ associated with it,  
with the weights being unique.  

- There is a unique binary search tree that can be built on the $n$ keys that also satisfies  
min-heap order by the weights (Why?).  

- Suppose $n$ weights $w_1, w_2, \dots , w_n$ are chosen independently at random from the unit  
interval $[0, 1]$ and then sorted. The resulting order is a random permutation of the  
$n$ items.  

A Treap or Randomized Binary Search Tree on $n$ keys $K_i$ is constructed by choosing $n$  
weights $w_i$ independently at random from the unit interval $[0, 1]$ and associating $w_i$ with  
$K_i$. The Treap is the unique BST built on the $n$ keys that also satisfies min-heap order  
on the weights.  

(a) Describe how to build $T$ in time $O(n \log n + PL(T))$  

(b) If $T$ is the Treap built, prove that the average value of $PL(T)$ is $O(n \log n)$  
Hint: consider quicksort

## (R*3) Analyzing Modified Quicksort from Problem (R4)
Our analysis of QUICKSORT in class assumed that all elements were distinct.  

Problem (R4) developed a more sophisticated version of Quicksort that handles repeated  
items more efficiently.  

How would you adjust the analysis (binary tree plus indicator random variables) in  
the lecture notes to avoid the assumption that all elements are distinct and prove that  
QUICKSORT' runs in $O(n)$ time.

## (R*4) Recursive Independence in the Probabilistic Analysis of Quicksort
The probabilistic analysis of Quicksort (in COMP3711H) used the fact that if $A$ is the  
set of items in subarray $A[p \dots r]$ and $\pi$ a random permutation of $A$ then  

(a) $A[r]$ is equally likely to be any item in $A$  

(b) After running the partition algorithm on $A[p \dots r]$, the input to the new left and  
right subproblems are again random permutations.  

Prove the correctness of this fact.

# Divide & Conquer (DC)

## (DC1)
Derive asymptotic upper bounds for $T(n)$. Make your bounds as tight as possible.  

(a) You may assume $n$ is a power of 2.  

$T(1) = 1$  

$T(n) = T(n/2) + n$ if $n > 1$  

(b)  

$T(1) = T(2) = 1$  

$T(n) = T(n -2) + 1$ if $n > 2$  

(c) You may assume $n$ is a power of 3.  

$T(1) = 1$  

$T(n) = T(n/3) + n$ if $n > 1$  

(d) You may assume $n$ is a power of 2.  

$T(1) = 1$  

$T(n) = 4T(n/2) + n$ if $n > 1$  

(e) You may assume $n$ is a power of 2.  

$T(1) = 1$  

$T(n) = 3T(n/2) + n^2$ if $n > 2$  

(f) You may assume $n$ is a power of 2.  

$T(1) = 1$  

$T(n) = T(n/2) + \log_2 n$ if $n > 1$  

(g) You may assume $n$ is a power of 2.  

$T(1) = 1$  

$T(n) = 2T(n/2) + \log_2 n$ if $n > 1$

## (DC2)
Using the Master Theorem, give asymptotic tight bounds for $T(n)$  

(a)  

$T(1) = 1$  

$T(n) = 3T(n/4) + n$ if $n > 1$  

(b)  

$T(1) = 1$  

$T(n) = 3T(n/4) + 1$ if $n > 1$  

(c)  

$T(1) = 1$  

$T(n) = 4T(n/2) + n^2$ if $n > 1$  

(d)  

$T(1) = 1$  

$T(n) = 4T(n/3) + n^2$ if $n > 1$  

(e)  

$T(1) = 1$  

$T(n) = 9T(n/3) + n^2$ if $n > 1$  

(f)  

$T(1) = 1$  

$T(n) = 10T(n/3) + n^3$ if $n > 1$  

(g)  

$T(1) = 1$  

$T(n) = 99T(n/10) + n^2$ if $n > 1$  

(h)  

$T(1) = 1$  

$T(n) = 101T(n/10) + n^2$ if $n > 1$

## (DC3) Using Black-box median algorithms (modified from CLRS)
For this problem, you assume that you are given a black-box $O(n)$ time algorithm for  
finding the median ($\lceil n/2 \rceil$nd) item in a size $n$ array. This means that you can call the  
algorithm and use its result but can’t peer inside of it.  

(a) Show how Quicksort can be modified to run in $O(n \log n)$ worst case time.  

(b) Give a simple linear-time algorithm that solves the selection problem for an arbitrary  
order statistic. That is, given $k$, your algorithm should find the $k$’th smallest item.  

(c) For $n$ distinct elements $x_1, x_2, \dots , x_n$ with associated positive weights $w_1, w_2, \dots , w_n$  
such that $\sum_{i=1}^n w_i = 1$, the weighted (lower) medium is the element $x_k$ satisfying  

$\sum_{x_i < x_k} w_i < \frac{1}{2}$ and $\sum_{x_i > x_k} w_i \leq \frac{1}{2}$.  

If the $x_i$ are sorted, then it is easy to solve this problem in $O(n)$ time by just summing  
up the weights from left to right and walking through the sums until $k$ is found. Show  
that if the items are not sorted you can still solve the problem in linear time using  
the black box median finding algorithm.

## (DC4) Polynomial Evaluation
The input to this problem is a set of $n+1$ coefficients $a_0, a_1, \dots , a_n$.  
Define $A(x) = \sum_{i=0}^n a_i x^i$  

(a) Given value $x$, how can you evaluate $A(x)$ using $O(n)$ multiplications and $O(n)$  
additions?  
Can you evaluate $A(x)$ using at most $n$ multiplications and $n$ additions?  

(b) Now suppose that $A(x)$ has at most $k$ non-zero terms. How can you evaluate $A(x)$  
using $O(k \log n)$ operations.  
Hint. How can you evaluate $x^n$ using $O(\log n)$ operations.

## (DC5) Interpolating Polynomials
The values $A(x_0), A(x_1), \dots , A(x_n)$, define a unique degree  
$n$ polynomial having those values. The Langragian interpolation formula for finding the  
coefficients $a_0, a_1, \dots , a_n$ of $A(x)$ works by first setting  

$I_i(x) = \prod_{0\leq j \leq n, j \neq i} \frac{x - x_j}{x_i - x_j}$  

and then defining  
$A(x) = \sum_i A(x_i) I_i(x)$.  

Show how to use the formula to evaluate the coefficients of $A(x)$ in $O(n^2)$ time.  

Hints: Note that the $I_i(x)$ are very similar to each other.  
Instead of constructing them from  
scratch consider building their smallest common multiple $P(x)$ and then build $I_i(x)$ via division.  
First recall how long it takes to divide a degree $n$ polynomial by a degree one polynomial. You can  
use this procedure as a subroutine.

## (DC6)
Prove from first principles that  

$T(n) = 1$ if $1 \leq n \leq 8$  
$T(n) = T\left(\left\lfloor \frac{n}{5} \right\rfloor + 1\right) + T\left(\left\lfloor \frac{3n}{4} \right\rfloor + 2\right) + n$ if $n > 8$  

satisfies $T(n) = O(n)$.  

Note: Before trying to solve this, review the slides describing the analysis of the deterministic  
selection problem. The analysis of this recurrence should follow the same technique used there.

## (DC7) More Median of Medians
For this problem you can assume the following fact: $\alpha, \beta \geq 0$,  
$N$ is a non-negative integer and $c, D$ constants (possibly negative). For $n > N$, if  

$T(n) \leq T(\alpha n + c) + T(\beta n + d) + \Theta(n)$  

then  

$T(n) = \begin{cases} O(n) & \text{if } \alpha + \beta < 1 \\ O(n \log n) & \text{if } \alpha + \beta = 1 \\ \Omega(n \log n) & \text{if } \alpha + \beta > 1 \end{cases}$.  

Recall that our deterministic selection algorithm yielded the recurrence  

$T(n) = T(n/5) + T(7n/10 + 6) + \gamma n$  

for some constant $\gamma$. The formula above implies $T(n) = O(n)$.  

Our algorithm (i) splits the items into sets of 5 elements, (ii) found the median of each  
set and then (iii) found $x$, the median of those medians. It then ran partition with $x$ as  
a pivot and recursed on the appropriate subset. From the definition of $x$ we were able  
to prove that the subarrays created by partition both had at most $7n/10 + 6$ elements,  
leading to the recurrence relation and hence $O(n)$ running time.  

Now suppose that instead of splitting the items into sets of size 5, we split them into  
sets of size 3 and then ran the algorithm the same way. Would we still get an $O(n)$ time  
algorithm?  

What about if we split into sets of size 7? Sets of size 9?

## (DC8) Divide and Conquer
You have found a newspaper from the future that tells you the price of a stock over a  
period of $n$ days next year. This is presented to you as an array $p[1 \dots n]$ where $p[i]$ is the  
price of the stock on day $i$.  

Design an $O(n \log n)$-time divide-and-conquer algorithm that finds a strategy to make as  
much money as possible, i.e., it finds a pair $i, j$ with $1 \leq i < j \leq n$, such that $p[j] - p[i]$  
is maximized over all possible such pairs.  

If there is no way to make money, i.e., $p[j] - p[i] \leq 0$ for all pairs $i, j$ with $1 \leq i < j \leq n$,  
your algorithm should return “no way”.  

(a) Describe your algorithm and explain why it gives the correct answer  

(b) Analyze your algorithm to show that it runs in $O(n \log n)$ time.  

Note: The purpose of this problem is to provide you practivce with D & C tools. There is also an  
$O(n)$ time algorithm for solving this problem. See if you can find it.

## (DC9) Modified from CLRS
Professor Olay is consulting for an oil company, which is planning a large pipeline running  
east to west through an oil field of $n$ wells. From each well, a spur pipeline is to be  
connected directly to the main pipeline along a shortest path (either north or south).  
Given the $x, y$ coordinates of the wells, how should the professor pick the optimal location  
of the main pipeline (the one that minimizes the total length of the spurs). Show that  
the optimal location can be determined in linear time.  

Hint: Try to solve this using the median finding algorithm.

## (DC10) Modified from CLRS Largest i numbers in sorted order.
Given a set of $n$ numbers, we wish to find the $i$ largest in sorted order using a comparison-  
based algorithm.  
Find the algorithm that implements each of the following methods  
with the best asymptotic worst-case running time and analyze the running times of the  
algorithms in terms on $n$ and $i$.  

(a) Sort the numbers and list the $i$ largest.  

(b) Build a max-priority queue (i.e., a heap) from the numbers and call EXTRACT-MIN  
$i$ times.  

(c) Use a selection algorithm to find the ith largest number, partition around that num-  
ber and sort the $i$ largest numbers.

## (DC11) Finding a “fixed point”.
Input: a sorted array $A[1..n]$ of $n$ distinct integers  
(Distinct means that there are no repetitions among the integers. The integers can be  
positive, negative or both).  

Design an $O(\log n)$ algorithm to return an index $i$ such that $A[i] = i$, if such an $i$  
exists. Otherwise, report that no such index exists.  

As an example, in the array below, the algorithm would return 4.  

$i$ 1 2 3 4 5 6 7 8  
$A[i]$ -3 0 1 4 12 17 20 22  

while in the array below this line, the algorithm would return that no such index exists.  

$i$ 1 2 3 4 5 6 7 8  
$A[i]$ -3 0 1 7 12 17 20 22  

Hint: $O(\log n)$ often denotes some type of binary search. Can you think of any question  
you might ask that permits you to throw away some constant fraction of the points?

## (DC12) The Majority Problem
Let $A[1..n]$ be an array of $n$ elements. A majority element of $A$ is any element occurring  
more than $n/2$ times (e.g., if $n = 8$, then a majority element should occur at least 5  
times). Your task is to design an algorithm that finds a majority element, or reports that  
no such element exists.  

Suppose that you are not allowed to order the elements; the only way you can access the  
elements is to check whether two elements are equal or not.  

Use standard divide-and-conquer techniques to design an $O(n \log n)$-time algorithm for  
this problem.

## (DC13) Lagrangian Interpolation Example
(a) Use Lagrangian Interpolation to construct a degree-2 polynomial $A(x)$ satisfying  

$A(1) = 1$, $A(2) = 4$, $A(3) = 9$.  

(b) Use Lagrangian Interpolation to construct a degree-2 polynomial $A(x)$ satisfying  

$A(1) = 1$, $A(2) = 8$, $A(3) = 27$.

## (DC*1) Two for the Price of One Convolutions
Let $\langle a_i \rangle$ denote the sequence of real numbers $a_0, a_1, \dots , a_{n-1}$.  
The convolution of  
$\langle a_i \rangle$ and $\langle b_i \rangle$ both of length $n$ is sequence $\langle c_i \rangle$ of length $2n -1$ where $c_i = \sum_{j=1}^i a_j b_{i-j}$. In class we saw that the FFT could calculate $\langle c_i \rangle$ in $O(n \log n)$ time.  

Now suppose that you are given TWO sequences $\langle a'_i \rangle$ and $\langle a''_i \rangle$ both of length $n$ and  
$\langle b_i \rangle$ of length $n$. Can you see a quick way of calculating the convolution of $\langle a'_i \rangle$ and  
$\langle b_i \rangle$ and the convolution of $\langle a''_i \rangle$ and $\langle b_i \rangle$ without having to run the algorithm  
twice?  

Note: It is not expected that you could solve this yourself without prior knowledge. It is a cute  
trick that is worth knowing about, though, and understanding it provides a better understanding  
of what the FFT is really doing.

## (DC*2) An O(n) majority algorithm
Consider the majority problem defined in problem DC12.  

Design an $O(n)$ time algorithm for it.