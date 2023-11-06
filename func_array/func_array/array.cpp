#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//print every elements
void PrintfArray(int array[],int length) //there is no output 
{
	int j = 0;
	for (j = 0; j < length; j++)
	{
		printf("%d", array[j]);	
		printf(",");
	}

}//there is no return.



//initialize every element to 0
void InitArray(int array[], int length)
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		array[i] = 0;
	}
}

void ReverseArray(int array[], int length)
{
	int i = 0;
	int j = length - 1; // ��ʼʱ j ָ����������һ��Ԫ��

	while (i < j) {
		// ���� array[i] �� array[j] ��ֵ
		int temp = array[i];
		array[i] = array[j];
		array[j] = temp;

		i++; // �ƶ� i ����һ��Ԫ��
		j--; // �ƶ� j ��ǰһ��Ԫ��
	}
}


int main()
{
	int length = 0;
	printf("input a array with the length of: ");
	scanf("%d", &length);
	int* array = (int*)malloc(length * sizeof(int));// initialize array variable

	int i = 0;
	for (i = 0; i < length; i++)
	{
		printf("input every element, this is the %d element: ", i + 1);
		scanf("%d", &array[i]); 
	}//generate the array


	printf("The element of array are: \n");
	PrintfArray( array, length);//no return, but output the element of array.


	printf("\n");
	printf("The inverse element of array are: \n");
	ReverseArray(array, length);
	PrintfArray(array, length);


	InitArray(array, length);
	printf("\n");// initialize every elements to "0"


	printf("initialize the element to 0\n");//printf every element (0)
	PrintfArray(array, length);


	free(array);
	return 0;
}