#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int year = 1000;
	for (year = 1000; year < 2001; year++)
	{
		if ((year % 4 == 0) && (year % 100 != 0))
		printf("%d ", year);
	

	}
	return 0;
}
//
//#include<stdio.h>
//int main()
//{
//	int year = 1000;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((0 == year % 4 && year % 100 != 0) || 0 == year % 400)
//			printf("%d\n", year);
//
//	}
//	return 0;
//}
