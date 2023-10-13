#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////int main()
////{
////	int a = 2 + 10;
////	int b = 2 -10;
////	printf("%d\n", a); printf("%d\n", b);
////	printf("%d\n", 2+10);
////	printf("%d\n", a*b);
////	printf("%lf\n", 7.00/3);
////	printf("%d\n", 7 % 2);
////	printf("%d\n", 7 % -2);
////	printf("%d\n", -7 % 2);
////	printf("%d\n", -7 % -2);//取模运算的结果的正负号由第一个数决定
////	
////
////	//赋值操作符
////	int a = 0;
////	int b = 0;
////	a = a + 3;
////	a += 3;
////	b = b -= 2;
//
//
//
//
//	
//	return 0;
//}
// 
// 
//	//单目操作符
//
//	//前置加加
//int main()
//
//{
//	int a = 2;
//	//int b = ++a;
//	////前置加加,先加一后使用
//	//printf("a=%d b=%d\n", a, b);//
//	//后置加加
//	int b = a++;
//	printf("a=%d b=%d\n", a, b);//
//	return 0;
//}
//int  main()
//{
//	int a = (int)3.14;
//	printf("%d", a);
//
//	return 0;
//}



//scarf 和printf
//
////printf
//int main()
//{
//	printf("hello\nworld");
//	//占位符
//	printf("%-11d", 123);//这个字符占位11,但是3后面还有8个空位  
//	printf("%11d\n", 123);//        123
//	//限定宽度
//	printf("%6.2f", 3.14);//前面的整数位要占六位后面的小数要占两位
//	printf("%*.*f",6,2, 3.14);//上面的值也可以用星号代替
//	return 0;
//}
//

//
//int main()
//{
//	int score = 0;
//	printf("请输入成绩: ");
//	scanf("%d", &score);
//	printf("score=%d\n", score);
//	return 0;
//}
//
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int r = scanf("%d, %d, %d %d", &a, &b, &c);//可以连起来使用
//	printf("r=%d\n", r);
//	int r = scanf("%d, %d, %d %d", &a, &b, &c);//可以放到一个变量中使用
//
//
//	return 0;
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int  c = 0;
//	scanf("%d,%d,%d", &a, &b, &c);//这个地方有逗号则输入的时候也一定要加上那个逗号
//	printf("%d, %d, %d\n", a, b, c);
//	return 0;
//
//}
//
////
////
//int main()
//{
//	char ch = 0;
//	//int a = 20;
//	scanf("%d", ch);
//	printf("%c--------", ch);
//	return 0;
//}
//
//
//
//
//
////赋值忽略值
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d%*c%d%*c%d",&year,&month,&day);
//	printf("%d %d %d\n", year, month, day);
//	return 0;
//}
// 
// 
// //


// 
//
// 
//  if...else语句
//
//int main()
//
//{
//
//	int a = 0;
//	printf("输入一个数字:");
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("这个数是一个奇数");
//	else
//		printf("这个是是一个偶数");
//	return 0;
//}



//语句内部添加大括号的情况
//
//int main()
//{
//	int age = 0;
//	printf("请输入你的年龄: ");
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年\n");
//		printf("可以谈恋爱");
//	}
//	else
//	{
//		printf("未成年\n");
//		printf("不可以谈恋爱");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a=%d b=%d c=%d\n:", a, b, c);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++);
//	{
//		if (i = 5)
//			printf("%d", i);
//	}
//	return 0;
//
//}
//
//
//
//
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d,%d", &a, &b);
//    printf("整数商%d,余数%d ",a/b, a % b);
//    return 0;
//}
int main()
{
    int a, b = 0;
    scanf("%d %d", &a, &b);
    if (a == b)
        printf("%d=%d", a, b);
    else if (a > b)
        printf("%d>%d", a, b);
    else
        printf("%d<%d", a, b);
    return 0;
}














