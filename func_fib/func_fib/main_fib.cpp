#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "fib.h"

int main()
{
    int n,m;
    printf("Enter two positive number: ");
    scanf("%d %d", &n,&m);

    if (n < 0) {
        printf("Please enter a non-negative number.\n");
    }
    else {
        int result = recursiveFib(n);
        printf("The Fibonacci number at position %d is: %d\n", n, result);
        int result2 = iterativeFib(m);
        printf("By iteration is %d\n", result2);
    }
	return 0;
}