#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{

	int a = 0x11223344;
	printf("%p\n", &a);
	int* pa = &a;//int * pa ��ָ�����     &a ��ָ��(��ַ)
	//int * pa = &a;
	//int *pa =&a;������һ����˼

	char ch = 'w';
	char* pc = &ch;
	printf("%p\n", &ch);
	*pc = 'abc';//�޸�ch=123
	printf("%s\n", ch);
	return 0;
} 