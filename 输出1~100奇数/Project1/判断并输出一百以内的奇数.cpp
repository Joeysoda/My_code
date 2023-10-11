#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	while (a <= 100)
	{
		if (a % 2 == 1)
			printf("%d ", a);//i+=2¿ÉÒÔ±Ü¿ªifÓï¾ä
		a = a + 1;//i++
	}
	
	return 0;

}