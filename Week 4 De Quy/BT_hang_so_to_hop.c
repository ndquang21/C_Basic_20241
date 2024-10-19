#include <stdio.h>
#define P 1000000007
int C(int k, int n){
    if (k == n || k == 0){return 1;}
    else {return (C(k-1, n-1)+ C(k,n-1)%P);}
}

int main (){
    int k, n;
    printf ("Nhap n: ");
    scanf ("%d", &n);
    printf ("Nhap k: ");
    scanf ("%d", &k);
    printf ("%d", C(k, n));
    return 0;
}
đ
