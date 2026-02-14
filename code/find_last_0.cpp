#include <iostream>
using namespace std;

int find_last_0(const int* A, int l , int r) {
    if (l > r) {
        return -1;
    }
    int m = (l + r) / 2;
    if (A[m] < A[m + 1]) {
        return m;
    }
    if (A[m] > A[1]) 
        return find_last_0(A, l, m - 1);
    else
        return find_last_0(A, m + 1, r);
}
int main() {
    int A[10] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1};
    int k = find_last_0(A, 0, 9);
    cout << k << endl;
    return 0;
}