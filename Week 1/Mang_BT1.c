#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    double arr[n], sum = 0, average, mindiff;

    printf("Nhap cac phan tu: ");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    mindiff = fabs(arr[0] - average); 
    for (int i = 1; i < n; i++) {
        double diff = fabs(arr[i] - average);
        if (diff < mindiff) {
            mindiff = diff;
        }
    }
    printf("Gia tri trung binh: %.2lf\n", average);
    printf("Cac phan tu co gia tri gan nhat voi gia tri trung binh: ");
    for (int i = 0; i < n; i++) {
        if (fabs(arr[i] - average) == mindiff) {
            printf("%.2lf ", arr[i]);
        }
    }
    return 0;
}
