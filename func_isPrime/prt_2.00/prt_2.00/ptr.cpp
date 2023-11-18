#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//	int* pi = &a;
//	char* pa = (char*)&a;
//	*pa = 0;
//	return 0;
//}


//
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = (char*) & a;
//	printf(" %p\n", pa);
//	printf("%p\n", pc);
//
//	printf("pa+1=%p\n", pa + 1);//+1
//	printf("pc+1=%p\n", pc + 1);//+4 
//	//因为和指针类型有关系,指针类型是int*占用4个字节,指针类型是char*占用一个字节
//
//	return 0;
//}

//pointer 输出array
int main()
{
	int arr[10] = { 0 };
	int i = 0;

	int* p = &arr[0];//获取数组中第一个数字的地址,交给p

	//赋值p为1
	for (i = 0; i < 10; i++);//十个数字,需要十次
	{
		*p = 1;
		p++;//因为类型是int* 每次加1,地址加4

	}



	//打印数组
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);

	}


	return 0;




}