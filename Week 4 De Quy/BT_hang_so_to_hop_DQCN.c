#include<stdio.h>
#define P 1000000007
#define N 1000
int A[N][N] = {0};
int C (int k, int n){
    if (k == 0 || k == n) A[k][n] = 1;
    if (A[k][n] == 0) A[k][n] = (C(k-1,n-1) + C(k, n-1))%P;
    return A[k][n];
}
int main (){
    int k, n;
    printf ("Nhap k: ");
    scanf  ("%d", &k);
    printf ("Nhap n: ");
    scanf  ("%d", &n);
    printf ("%d", C(k, n));
    return 0;
}
