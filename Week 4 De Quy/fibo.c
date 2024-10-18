#include<stdio.h>
int sum = 0;
int fibo(int n){
    if (n <= 1){return n;}
    else {return (fibo(n-1) + fibo (n-2));}
}
int main (){
    int n;
    printf ("So fibonacci thu: ");
    scanf ("%d", &n);
    printf ("%d", fibo(n));
}
