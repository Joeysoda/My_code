#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

const char* isLeap(char y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		return "Leap year";
	else
		return "normal year";
}


int main()
{
	int year = 0;
	printf("input a integer number: ");
	scanf("%d", &year);
	const char* a= isLeap(year);
	printf("%s", a);
	return 0;
}