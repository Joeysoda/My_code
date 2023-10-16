#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//转义字符
//	//   \?  在书写连续多个问号的时候，防止被识别为三字母词，老编译器会有这种问题
//	
//	//   \'   用于表示字符常量  '
//
//	printf("%s\n", "a");
//	printf("%s\n", "\'");
//
//	//   \"   用于表示字符常量  "
//	printf("%s\n", "\"");
//
//	// \\   用于表示"\"
//	printf("c:\test\test.c");
//	printf("c:\\test\\test.c");
//  
//	// \a 用于电脑报警
//
//	// \b  用于backapace
//	printf("abcde\bfghi"); //abcdfghi
//
//	// 
//	// 
//	// 
//	//
//
//	return 0;
//
//}
//int main()
//{
//	printf("%c\n", '\130');
//	//   \ddd d为三个数字，转换为八进制数，转换为八进制数是X
//	//   \ddd 为字符的八进制表示方式
//
//	return 0;
//}
//#include<string.h>	
//int main()
//{	
//	//strlen  求字符串的长度，不求\0和转义字符
//	
//	printf("%zd\n", strlen("abc"));//3
//
//	printf("%zd\n", strlen("c:\test\130\test.c"));//13
//
//	return 0;
//}


//控制语句

//int main()
//{
//	;//空语句
//
//	3 + 4;//表达式语句
//
//	printf("hehe\n");//函数调用语句
//
//	return 0;
//}

//布尔值
//#include<stdbool.h>
//int main()
//{
//	bool flag = false;
//	if (flag)
//		printf("hehe");
//	return 0;
//}


//
////字节类型
//int main()
//{//sizeof 计算结果的类型是size_t，size_t是一种无符号的整数，这种整数类型在打印的时候用%zd
//	printf("%zd\n", sizeof(char));//
//	printf("%zd\n", sizeof(bool));//1
//	printf("%zd\n", sizeof(short ));//2
//	printf("%zd\n", sizeof(int));//4
//	printf("%zd\n", sizeof(float));//4
//	printf("%zd\n", sizeof(long));//4   C language sizeof（long） >=sizeof(int)
//	printf("%zd\n", sizeof(long long));//8
//	printf("%zd\n", sizeof(double));//8
//	printf("%zd\n", sizeof(long double));//8
//
//	printf("%d\n", sizeof(3.14));//double
//	printf("%d\n", sizeof(3.14f));//float
//
//	return 0;
//}

//
////sizeof()里面的内容不计算
//int main()
//{
//	short s = 2;
//		int b = 10;
//		printf("%zd\n", sizeof(s =b+1));
//		printf("s=%d\n", s);
//
//}


//signed undigned
//int ======signed int 有符号的整形    比特位的第一位是用来存放正负号的
//int ----------unsigned int 只能存正号的整型

//char 有可能是有符号的signed char， 也可能是unsigned char

//
//int main()
//{
//	int age = 12;//创建变量
//	printf("%d\n", age);
//
//}


////



//
//int b = 100;//全局变量
//
//int main()
//{
//	{
//		int a = 10;//局部变量，在大括号内部的使用
//		printf("%d\n", a);
//	}
//	return 0;
//
//}

int b = 100;//全局变量

int main()
{
	{
		int a = 10;//局部变量，在大括号内部的使用
		printf("%d\n", a);
	}
	return 0;

}