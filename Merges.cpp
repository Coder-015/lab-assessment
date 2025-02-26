#include <iostream>
using namespace std;

int mergeArrays(int A[], int M, int B[], int N, int C[]) {
    int j = N - 1, k = 0;
    while (int i=0,i < M && j >= 0) {
        if (A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j--];
    }
    while (i < M)
        C[k++] = A[i++];
    
    while (j >= 0)
        C[k++] = B[j--];
        
    return 0;
}

int main() {
    int A[] = {2, 5, 8, 12};
    int B[] = {15, 10, 7, 3};
    int M = sizeof(A) / sizeof(A[0]);
    int N = sizeof(B) / sizeof(B[0]);
    int C[M + N];

    mergeArrays(A, M, B, N, C);

    for (int i = 0; i < M + N; i++)
        cout << C[i] << " ";
    
    return 0;
}
