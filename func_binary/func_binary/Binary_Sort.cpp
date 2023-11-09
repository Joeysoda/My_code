#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>
#include "Binary_Sort.h"


int  binarySort(int array[], int target, int start,int end)
{
	if (start > end)
	{
		return -1;
    }
	int mid = (start + end) / 2;
	if (array[mid] == target)
	{
		return mid;
	}
	else if (array[mid] < target) {
		return binarySort(array, target, mid + 1, end); // Recursively search the right half
	}
	else {
		return binarySort(array, target, start, mid - 1); // Recursively search the left half
	}
	
}




int main()
{
	int target = 0;
	int length = 0;
	int  b=0;

	if (length < 0)
	{
		printf("Not Valid");
		return 1;
	}


	printf("input a integer number: ");
	scanf("%d", &length);
	
	//input an array
	int* array = (int*)malloc(length*sizeof(int));
	int i = 0;
	for (i = 0; i < length; i++)
	{
		printf("Please input the %d: ", i + 1);
		scanf("%d", &array[i]);
	}

	printf("input a target number that you want to search");
	scanf("%d", &target);
	 b= binarySort(array, target,0,length-1);
	printf("%d", b);
	return 0;
}




































