#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int is_leap_year( int month2)
{
	if (((month2 % 4 == 0) && (month2 % 100 != 0)) || (month2 % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

int num_of_day(int year1, int month1)
{

	int day = 0;
	int month[] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	if (is_leap_year(month1) && (month1 == 2))
	{
		return 29;
	}
	else
	{
	day = month[month1];
	return day;
}
}


int main()
{
	int year = 0;
	int month = 0;
	printf("input a year and the month");
	scanf("%d%d", &year, &month);
	int d=num_of_day(year,month);
	printf("%d", d);
	return 0;
}