#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//pointer 输出array
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int* p = &arr[0];//获取数组中第一个数字的地址,交给p

	//赋值p为1
	for (i = 0; i < 10; i++);//十个数字,需要十次
	{
		*p = 1;//赋值为1
		p++;//因为类型是int* 每次加1,地址加4
	}

	p = &arr[0];
	//打印数组
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}

	 
	return 0;
}





