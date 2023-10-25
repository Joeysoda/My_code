#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int n=0;
    int i=0;
    int j=0;
    char arr[20][20];
    while (scanf("%d", &n) != EOF) {
        if (n < 3 || n > 20) {
            continue;
        }

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                if (i == 1 || i == n || j == 1 || j == n) {
                    arr[i][j] = '* ';
                }
                else {
                    arr[i][j] = '  ';
                }
            }printf("%c", arr[i][j]);
            printf("\n");
        }
    }

    return 0;
}