#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int a = 1;
	double  num1 = 0;
	double  num2 = 0;
	double   sum = 0;
	for (i = 2; i < 101; i += 2);
		   num2 = num2 + (1.0 / i);
	for (a = 1; a < 101; a += 2);
		num1 = num1 + (1.0 / a);
		sum = num1 - num2;
		printf("%f+%f=%f",num1,num2, sum);
	return 0;
}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//
//	double sum = 0.0;
//	int sign = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum += sign * 1.0 / i;//�ڶԸ�����������͵�ʱ��Ҫ�ȶ������͵����ݣ�����ת�����ٽ������
//		sign = -sign;//��������ת��������ǰһ��Ϊ-1����һ��ȡ�෴���ֿ���ȡ��������
//
//
//	}
//	printf("%lf", sum);
//
//
//	return 0;
//
//}
