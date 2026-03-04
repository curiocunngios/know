#include <iostream> 
#include <limits>
#include <algorithm>
using namespace std;


int msp(const int* A, int l, int r) {
    if (l == r) {
        return A[l];
    }

    int m = (l + r) / 2;

    int M1 = msp(A, l, m); int M2 = msp(A, m + 1, r);
    int M3 = 1; 

    return 0;

} 
int main () {
    int A[5] = {-1, 2, -3, -4, 2};
    int result = msp(A, 0, 4);

    cout << result << endl;
}