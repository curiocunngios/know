---
aliases:
  - problem
  - Submitting your solution
tags:
  - flashcard/active/algo
  - COMP3711
  - status/completed
---

# Problem 
- too long.. check out https://usaco.training/

# Solution:
````cpp
/*
ID: curiocu1
TASK: gift1
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct People {
    string name;
    int currency = 0;
};
int main() {
    ofstream fout("gift1.out");
    ifstream fin("gift1.in");

    int n;
    fin >> n;

    People* P = new People[n];
    
    for (int i = 0; i < n; i++) {
        fin >> P[i].name;
    }

    string giver; int gave; int n_receiver;
    while (fin >> giver) {
        fin >> gave >> n_receiver;

        if (gave == 0 || n_receiver == 0) continue;

        int i = 0;
        for (; i < n ; ++i) {
            if (P[i].name == giver) {
                break;
            }
        }

        P[i].currency -= gave; P[i].currency += gave % n_receiver;

        string receiver;

        int j = 0;

        while (j < n_receiver && fin >> receiver){
            ++j;
            int k = 0;
            for (; k < n; ++k){
                if (P[k].name == receiver){
                    P[k].currency += gave / n_receiver;
                }
            }
        }
    } 

    for (int i = 0; i < n; ++i) {
        fout << P[i].name << " " << P[i].currency << "\n";
    }
    
}

````