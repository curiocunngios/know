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

/*
USER: curio curio [curiocu1]
TASK: gift1
LANG: C++

Compiling...
Compile: OK

Executing...
   Test 1: TEST OK [0.004 secs limit:1s, 3716 KB]
   Test 2: TEST OK [0.004 secs limit:1s, 3716 KB]
   Test 3: TEST OK [0.004 secs limit:1s, 3692 KB]
   Test 4: TEST OK [0.004 secs limit:1s, 3696 KB]
   Test 5: TEST OK [0.004 secs limit:1s, 3780 KB]
   Test 6: TEST OK [0.004 secs limit:1s, 3668 KB]
   Test 7: TEST OK [0.004 secs limit:1s, 3724 KB]
   Test 8: TEST OK [0.004 secs limit:1s, 3664 KB]
   Test 9: TEST OK [0.000 secs limit:1s, 3544 KB]

All tests OK.
YOUR PROGRAM ('gift1') WORKED FIRST TIME!  That's fantastic
-- and a rare thing.  Please accept these special automated
congratulations.

Here are the test data inputs:

------- test 1 [length 428 bytes] ----
10
mitnik
Poulsen
Tanner
Stallman
Ritchie
Baran
Spafford
Farmer
Venema
Linus
mitnik
300 3
Poulsen
Tanner
Baran
Poulsen
1000 1
Tanner
Spafford
2000 9
mitnik
Poulsen
Tanner
Stallman
Ritchie
Baran
Farmer
Venema
Linus
Tanner
1234 1
Poulsen
Stallman
536 3
Farmer
Venema
Linus
Ritchie
2000 1
mitnik
Baran
79 2
Tanner
Farmer
Farmer
0 0
Venema
12 9
mitnik
Poulsen
Tanner
Stallman
Ritchie
Baran
Spafford
Farmer
Linus
Linus
1000 1
mitnik
------- test 2 [length 118 bytes] ----
5
dave
laura
owen
vick
amr
dave
200 3
laura
owen
vick
owen
500 1
dave
amr
150 2
vick
owen
laura
0 2
amr
vick
vick
0 0
------- test 3 [length 34 bytes] ----
2
john
lennon
lennon
0 0
john
0 0
------- test 4 [length 766 bytes] ----
10
Alex
Bob
Catherine
Dave
Ebert
Francis
Godot
Harris
Iliya
Jimbo
Alex
2000 9
Bob
Catherine
Dave
Ebert
Francis
Godot
Harris
Iliya
Jimbo
Bob
2000 9
Alex
Catherine
Dave
Ebert
Francis
Godot
Harris
Iliya
Jimbo
Catherine
2000 9
Alex
Bob
Dave
Ebert
Francis
Godot
Harris
Iliya
Jimbo
Dave
2000 9
Alex
Bob
Catherine
Ebert
Francis
Godot
Harris
Iliya
Jimbo
Ebert
2000 9
Alex
Bob
Catherine
Dave
Francis
Godot
Harris
Iliya
Jimbo
Francis
2000 9
Alex
Bob
Catherine
Dave
Ebert
Godot
Harris
Iliya
Jimbo
Godot
2000 9
Alex
Bob
Catherine
Dave
Ebert
Francis
Harris
Iliya
Jimbo
Harris
2000 9
Alex
Bob
Catherine
Dave
Ebert
Francis
Godot
Iliya
Jimbo
Iliya
2000 9
Alex
Bob
Catherine
Dave
Ebert
Francis
Godot
Harris
Jimbo
Jimbo
2000 9
Alex
Bob
Catherine
Dave
Ebert
Francis
Godot
Harris
Iliya
------- test 5 [length 105 bytes] ----
4
these
names
are
dumb
dumb
534 3
these
dumb
are
are
351 1
names
these
509 2
dumb
names
names
278 1
dumb
------- test 6 [length 78 bytes] ----
2
someguy
someotherguy
someotherguy
1500 1
someguy
someguy
500 1
someotherguy
------- test 7 [length 136 bytes] ----
8
a
b
c
d
e
f
g
h
c
500 4
a
b
d
h
f
290 3
a
b
c
a
489 7
b
c
d
e
f
h
g
g
0 0
e
1789 2
f
h
d
2000 5
a
b
h
f
e
b
192 5
a
c
h
g
d
h
0 2
a
b
------- test 8 [length 255 bytes] ----
10
paul
stan
mark
doug
fred
bill
hank
rich
mike
john
paul
0 0
john
300 2
paul
stan
stan
1000 1
paul
mark
2000 3
paul
stan
doug
doug
510 2
paul
stan
fred
1560 2
paul
stan
bill
178 2
paul
stan
hank
97 2
paul
stan
rich
1999 2
paul
stan
mike
1531 2
paul
stan
------- test 9 [length 433 bytes] ----
10
paul
stan
mark
doug
fred
bill
hank
rich
mike
john
paul
1693 6
stan
mark
doug
fred
bill
hank
john
1843 3
hank
mike
paul
stan
1346 9
paul
mark
fred
bill
doug
hank
rich
mike
john
mark
1657 1
paul
doug
1256 9
paul
stan
bill
mark
fred
rich
hank
mike
john
fred
1250 6
paul
stan
bill
rich
john
mike
bill
1999 2
john
mike
hank
2000 8
stan
mark
doug
fred
rich
bill
mike
john
rich
1999 3
paul
bill
hank
mike
1999 5
hank
bill
mark
rich
john
Keep up the good work!
*/