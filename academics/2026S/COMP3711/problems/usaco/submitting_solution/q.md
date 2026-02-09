---
aliases:
  - problem
  - Submitting your solution
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# The First Challenge
The simplest programming challenge is named 'test' and requires you to read a pair of small integers from a single input line in the file 'test.in' and print their sum to the file 'test.out'


# Solution:
````cpp
/*
ID: curiocu1
TASK: test
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("test.out");
    ifstream fin ("test.in");
    int a, b;
    fin >> a >> b;
    fout << a+b << endl;
    return 0;
}
````

# Output
````
USER: curio curio [curiocu1]
TASK: test
LANG: C++

Compiling...
Compile: OK

Executing...
   Test 1: TEST OK [0.004 secs limit:5s, 3692 KB]
   Test 2: TEST OK [0.000 secs limit:1s, 3716 KB]

All tests OK.
YOUR PROGRAM ('test') WORKED FIRST TIME!  That's fantastic
-- and a rare thing.  Please accept these special automated
congratulations.

Here are the test data inputs:

------- test 1 [length 4 bytes] ----
1 1
------- test 2 [length 4 bytes] ----
3 9 
Keep up the good work!
Thanks for your submission!
````
