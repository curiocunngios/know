#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *A, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j >= 1; j--) {
            if (A[j - 1] <= A[j]) {
                break;
            }
            swap(&A[j - 1], &A[j]);
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
    int A[5] = {5, 8, 9, 3, 2};
    sort(A, sizeof(A) / sizeof(int));
    print(A, sizeof(A) / sizeof(int));
}