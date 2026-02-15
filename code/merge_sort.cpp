#include <iostream>
#include <vector>
using namespace std; 

void merge(vector<int>& A, int l, int m, int r) {
    
    // create two arrays L and R
    vector<int> L(m - l + 1); vector<int> R(r - (m + 1) + 1);
    for (int i = 0; i < (m - l + 1); ++i) {
        L[i] = A[l + i];
    }
    // L <- A[l..m], R <- A[m + 1..r]
    for (int i = 0; i < (r - (m + 1) + 1); ++i) {
        R[i] = A[m + 1 + i];
    }

    // append ∞ to both arrays (deleted this part as idk how to do this for integers in cpp)
    int i = 0, j = 0, k = l;
    for (; k < (r + 1) && i < (m - l + 1) && j < (r - (m + 1) + 1); ++k)
        if (L[i] < R[j]) {
            A[k] = L[i];
            ++i;
        }
        else {
            A[k] = R[j];
            ++j;
        }
    
    // a potential leftover item in the 
    while (i < (m - l + 1)) {
        A[k++] = L[i++];
    }
    while (j < (r - (m + 1) + 1)) {
        A[k++] = R[j++];
    }
}
    
void merge_sort(vector<int>& A, int l, int r) {
    if (l >= r)
        return;
    int m = (l + r) / 2;
    merge_sort(A, l, m);
    merge_sort(A, m + 1, r);
    merge(A, l, m, r);
}

int main() {
    vector<int> A = {2, 8, 7, 5, 4, 2, 3};
    merge_sort(A, 0, A.size() - 1);
    
    for (int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
