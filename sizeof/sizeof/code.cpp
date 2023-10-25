#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        if (n < 2 || n > 20) {
            printf("Invalid input. Please enter a number between 2 and 20.\n");
            continue;
        }

        char arr[20][20];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j || i == (n - j - 1)) {
                    arr[i][j] = '*';
                }
                else {
                    arr[i][j] = ' ';
                }
                printf("%c", arr[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
