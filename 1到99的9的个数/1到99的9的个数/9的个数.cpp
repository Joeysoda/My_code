#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num = 0;
		//int    i=0;
	int n = 1;
	for (n = 1; n <= 100; n++)//�˴������Լ�;,����������ʾ
	{
		if (n / 10 == 9 || n % 10 == 9) 
		{
			num = num + 1;
		}
	}	printf("%d", num+1);// ��99
	
	return 0;
}





//
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9 || i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count + 1);
//	return 0;
//}