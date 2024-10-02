#include <stdio.h>
int main(void){
    double A[10];
    int i;
    printf("Please enter 10 numbers:\n");
    for (i = 0; i < 10; i++){
        scanf("%lf", &A[i]);
    }
    printf("Numbers in reversed order:\n");
    for (i = 9; i >= 0; i--){
        printf("%0.2lf\n", A[i]);
    }
    return 0;
}