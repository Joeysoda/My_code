#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = a;
		a = b;
		b = temp % b;

	}return a;
}

int main()
{
	int num1; int num2;
	printf("������������: ");
	scanf("%d %d", &num1, &num2);

	int result = gcd(num1, num2);
	printf("�������������Լ����: %d\n", result);
	return 0;
}