#include<stdio.h>
void sangnhiphan (int a){
    if (a == 0) return;
    int b = a%2;
    sangnhiphan(a/2);
    printf ("%d", b);

}

int main (){
    int a;
    scanf ("%d", &a);
    sangnhiphan(a);

}
