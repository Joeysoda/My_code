#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int muti(int(num))
{
	return printf("%d * %d = % d ", num, num, num* num);
}


int main()
{
	int num = 0;
	printf("input a integer number \n");
	scanf("%d", &num);
	return muti(num);
	
	return 0;
}





