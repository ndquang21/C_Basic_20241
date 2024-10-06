#include <stdio.h>

#define MAX 100

void countFrequency(int arr[], int n, int freq[]) {
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;  
    }
}

int checkEqualArrays(int A[], int B[], int n) {
    int freqA[MAX] = {0}, freqB[MAX] = {0};

    countFrequency(A, n, freqA);
    countFrequency(B, n, freqB);

    for (int i = 0; i < MAX; i++) {
        if (freqA[i] != freqB[i]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n;
    int A[MAX], B[MAX];

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap phan tu cho mang A:\n");
    for (int i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    printf("Nhap phan tu cho mang B:\n");
    for (int i = 0; i < n; i++) {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }

    if (checkEqualArrays(A, B, n)) {
        printf("Mang A va B trung nhau.\n");
    } else {
        printf("Mang A va B khong trung nhau.\n");
    }

    return 0;
}

