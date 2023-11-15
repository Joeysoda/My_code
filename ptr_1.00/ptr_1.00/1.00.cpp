#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{

	int a = 0x11223344;
	printf("%p\n", &a);
	int* pa = &a;//int * pa 是指针变量     &a 是指针(地址)
	//int * pa = &a;
	//int *pa =&a;这三个一个意思

	char ch = 'w';
	char* pc = &ch;
	printf("%p\n", &ch);
	*pc = 'abc';//修改ch=123
	printf("%s\n", ch);
	return 0;
} 