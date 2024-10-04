#include <stdio.h>
#include <string.h>
int main() {
    int count[26] = {0};
    char input[100];

    printf("Nhap vao xau: ");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            count[input[i] - 'a']++; 
        }
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("The letter '%c' appears %d time(s).\n", i + 'a', count[i]);
        }
    }

    return 0;
}
