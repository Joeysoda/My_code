#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//int main()
//
//{
	//
	//int i = 0;
	//do {

	//	printf("%d ", i);
	//	i++;
	//} while (i <= 10);
//	//return 0;
//int main()
//{
//	int num = 0; 
//	int i = 0;
//	printf("输入一个数");
//	scanf("%d ",&i);
//	do {
//		i=i / 10;
//		num += 1;
//	} while (i);
//	printf("这是一个%d位数", num);
//	return 0; 
//}

//int main()
//{
//	int i = 0;
//	while (i < 11) 
//	{
//		if (i == 5)
//		{
//			//break;//停止循环
//			continue;//跳过本次循环
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++);
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf(" % d", i);
//	}
//	return 0;
//}
//
// 
// 计算100到200的素数
//int main()
//{
//	int a, b, c = 0; 
//	int count = 0;
//	for (a = 101; a <= 200; a+=2)
//	{
//		c = 0;
//		for (b = 2; b <= sqrt(a); b++)
//		{
//			if (a % b == 0)
//			{
//				c = 1;
//			}
//		}
//		if (c == 0)
//		{
//			printf(" %d ", a);
//			count += 1;
//		}
//	
//
//	}	printf(" \n count=%d", count);
//	return 0;
//}


////goto
//int main()
//{
//	
//	printf(" hehe\n");
//	goto flag;
//	printf("haha\n");
//	flag:
//		printf("heihei\n");
//	return 0;
//}

int main()
{
	int i, j = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("hehe\n");
		}

	}
	return 0;
}





