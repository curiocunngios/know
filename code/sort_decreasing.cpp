#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// selection sort (backwards)
/*
void sort_decreasing(int *A, int n) {
    for (int i = n - 1; i >= 1; i--) {
        for (int j = i - 1; j >= 0; --j) {
            if (A[i] > A[j]) {
                swap(A[i], A[j]);
            }
        }
    }
}
*/

void sort_decreasing(int *A, int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = n - 1; j >= i + 1; --j) {
            if (A[j] > A[j - 1]) {
                swap(A[j], A[j - 1]);
            }
        }
    }
}

void print(int *A, int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}
int main() {
    int A[5] = {1, 2, 3, 4, 5};
    sort_decreasing(A, sizeof(A) / sizeof(int));
    print(A, sizeof(A) / sizeof(int));
}