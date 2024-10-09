#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf ("Nhap n: ");
    scanf  ("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++){
        scanf ("%d", &A[i]);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (sqrt(A[i])*sqrt(A[i]) == A[i]){
            cnt++;
        }
    }
    printf  ("%d", cnt);
}
