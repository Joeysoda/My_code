#define _CRT_SECURE_NO_WARNINGS 1]
#include <stdio.h>
//int main()
//{
//	int a, b, c = 0;
//	printf("输入三个整数");
//	scanf("%d%*c%d%*c%d: ", &a, &b, &c);
//	if (a > b)
//		if (b > c)
//			printf("%d>%d>%d",a,b,c);
//		else
//			printf("%d>%d>%d"a,);
//
//
//	else
//		if(a>b)
//			printf("")
//	return 0;
//
//}

//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//	{
//
//		if (num % 2 == 0)
//			printf("偶数\n");
//		else
//			printf("奇数\n");
//	}
//	else
//		printf("小于零\n");
//	
//	return 0;
//}


//
////关系操作符
//int main()
//{
//	int r = (2 == 2);//TRUE---> 1
//	printf("%d\n", r);	
//	int rm= (2 == 3);//FALSE---> 0
//	printf("%d\n", rm);
//	return 0;
//	int a = 3;
//	//
//	if(5==a)
//	printf("hehe\n");
//	return 0;
//}
//
////
//int main()
//{
//	int a = 10;
//		int b = 12;
//		int c = 14;
//		//错误写法,先判断ab 在判断bc   if (a<b<c)
//		if (a < b && b < c)//正确写法
//		{
//			printf("hehe");
//		}
//	return 0;
//}

//闰年的判断
//int main()
//{
//	int year1 = 0;
//	scanf("%d", &year1);
//	if (year1 % 400 == 0 || year1 % 4 == 0 && year1 % 100 != 0)
//		printf("是闰年");
//	else
//		printf("不是闰年");
//	return 0;
//}
// 

//短路



//switch
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)
//	{
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	case 3:
//		printf("余数是零\n");
//		break;
//	}
//
//	return 0;
//}
//
//
////周一到周八
//int main()
//{
//	int day = 0;
//	printf(" input a number: ");
//	scanf("%d", &day);
//	switch (day)
//	{
//	//case 1:
//	//	printf(" Monday");
//	//	break;
//	//case 2:
//	//	printf("Tuesday");
//	//	break;
//	//case 3:
//	//	printf(" Wednesday");
//	//	break;
//	//case 4:
//	//	printf("4");
//	//	break;
//	//case 5:
//	//	printf("T5");
//	//	break;
//	//case 6:
//	//	printf("6");
//	//	break;
//	//case 7:
//	//	printf("7");
//	//	break;	
//	//default:
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//			printf("输入错误");
//		break;
//
//	}
//	return 0;
//}
//
//
//while循环
//
//
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//
//}
//
//
//
//练习
//for 循环
//
//int main()
//{
//	int n = 0;
//
//	for (n = 1; n <= 10; n++)//将while和为一部
//	{
//		printf("%d ", n);
//	}
//	return 0;
//}
// 
// 
// 
// 
////1-100三的倍数之和
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			sum = sum+i;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}
