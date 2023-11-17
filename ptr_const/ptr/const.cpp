#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	const int a = 10;//a不能被修改了，但a本质上还是变量，const只是在语法上做出一些限制
//
//	a = 20;//修改
//	printf("a=%d\n", a);
//	return 0;
//}

//
////const 可以用来修饰指针
//int main()
//{
//	const int a = 10;
//	int * pa = &a;
//	*pa = 0;
//		printf("%d\n", a);
//	return 0;
//}


//const 修饰指针const可以放到*左边，也可以放到*右边

int main()
{
	const int a = 10;	
	//	int const* p = &a;   //这里的const限制*p
	//	int *const p = &a;   //这里的const限制p


	*p = 0;
	printf("a=%d\n", a);
	return 0;
}