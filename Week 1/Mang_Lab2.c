#include<stdio.h>
int main(){
    int n;
    printf ("Nhap n: ");
    scanf  ("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++){
        printf ("Nhap phan tu %d: ", (i+1));
        scanf ("%d", &A[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += A[i];
    }
    printf ("%d", sum);
}