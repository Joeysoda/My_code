//
//
//void 	set(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//
//void output(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//
//
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int i = 0;
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	output(arr1, sz1);
//	set(arr1, sz1);
//	output(arr1, sz1);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void set_printf(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		arr[i] = -1;
	}
}


void new_printf(int arr[], int size)
{
	int n = 0;
	for (n = 0; n < size; n++)
	{
		printf("%d", arr[n]);
	}
	printf("\n");
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	set_printf(arr1, size1);
	new_printf(arr1, size1);
	return 0;
}

