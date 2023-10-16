#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//
//	int i = 0;
//	while (i < 101) {
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//			i++;
//		}
//		else
//			i++;
//	}
//
//	return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a, b, c;
//	scanf("%f,%f,%f", &a, &b, &c);
//	if (a > b)
//	{
//		if (b > c)
//		{
//			printf("%.1f,%.1f,%.1f", a, b, c);//a>b>c
//		}
//		else//b<c
//		{
//			if (a > c)//a>c>b
//			{
//				printf("%.1f,%.1f,%.1f", a, c, b);
//			}
//			else//a<c//c>a>b
//			{
//				printf("%.1f,%.1f,%.1f", c, a, b);
//			}
//		}
//	}
//	else//b>a
//	{
//		if (b < c)//c>b>a
//		{
//			printf("%.1f,%.1f,%.1f", c, b, a);
//		}
//		else//b>c//b>a
//		{
//			if (a > c)//b>a>c
//			{
//				printf("%.1f,%.1f,%.1f", b, a, c);
//			}
//			else//c>a//b>a//b>c
//			{
//				printf("%.1f,%.1f,%.1f", b, c, a);
//			}
//		}
//	}
//	return 0;
//}
//

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)//a>b
	{
		if (b > c)//a>b b>c
			printf("%d>%d>d", a, b, c);
		else //a>b c>b
		{
			if (a > c)//a>c>b
				printf("%d>%d>%d", a, c, b);
			else//c>a>b
				printf("%d>%d>%d", c, a, b);
		}
	}
	else//b>a
	{
		if (a > c)//b>a>c
			printf("%d>%d>%d", b, a, c);
		else//b>a c>a
		{
			if (b > c)//b>c>a
				printf("%d>%d>%d", b, c, a);
			else//cba
			
				printf("%d>%d>%d", c, b, a);
			
		}
	}
	return 0;
}
