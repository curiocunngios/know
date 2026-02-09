/*
ID: curiocu1
TASK: ride
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout("ride.out");
    ifstream fin("ride.in");
    string comet, group;
    fin >> comet >> group;
    
    int comet_sum = 1, group_sum = 1;
    // cout << comet_sum << endl;
    for (int i = 0; i < comet.size(); i++) {
        comet_sum *= (comet[i] - 'A' + 1) % 26;
        // cout << comet_sum << " ";
    }
    // cout << endl;
    for (int i = 0; i < group.size(); i++) {
        group_sum *= (group[i] - 'A' + 1) % 26;
        // cout << group_sum << " ";
    }
    // cout << endl;

    // cout << comet_sum << endl;
    // cout << group_sum << endl;
    if (comet_sum % 47 == group_sum % 47) {
        fout << "GO\n";
    }
    else {
        fout << "STAY\n";
    }
    return 0;
}