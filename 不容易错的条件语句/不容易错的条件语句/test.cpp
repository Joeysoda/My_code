#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 5;
	if (4 == a)//双等号用于判断，单等号用于赋值
		//这种写法可以有效防止bug的产生
	{
			printf("hehe\n");
}
	return 0;
}