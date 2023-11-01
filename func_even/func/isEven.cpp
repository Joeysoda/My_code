
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

const char* isEven(int num)
{
    if (num % 2 == 1)
    {
        return "Odd";
    }
    else
    {
        return "Even";
    }
}

int main()
{
    int a = 0;
    printf("input a number: ");
    scanf("%d", &a);
    const char* b = isEven(a);
    printf("%s", b);
    return 0;
}
