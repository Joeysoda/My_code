#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//int max_array(int arr[], int length) {
//    if (length <= 0) {
//        return 0;  // Return an appropriate value for an empty array.
//    }
//
//    int max = arr[0];
//
//    for (int i = 1; i < length; i++) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//
//    return max;
//}
//
//int main() {
//    int length;
//
//    printf("Enter the length of the array: ");
//    scanf("%d", &length);
//
//    if (length <= 0) {
//        printf("Invalid array length!\n");
//        return 1;
//    }
//
//    int* array = (int*)malloc(length * sizeof(int));
//
//    if (array == NULL) {
//        printf("Memory allocation failed!\n");
//        return 1;
//    }
//
//    for (int i = 0; i < length; i++) {
//        printf("Enter element %d: ", i + 1);
//        scanf("%d", &array[i]);
//    }
//
//    int maxValue = max_array(array, length);
//
//    printf("The maximum value in the array is: %d\n", maxValue);
//
//    free(array);  // Don't forget to free the allocated memory.
//
//    return 0;
//}

//
//#include <stdio.h>
//#include<stdlib.h>
//
//
//int max_array(int arr[], int length)
//{
//	if (length <= 0)
//	{
//		return 0;
//	}
//
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < length; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}return max;
//}
//
//
//
//int main()
//{
//	int length;
//	printf("input a integer number of array length: ");
//	scanf("%d", &length);
//	if (length < 0)
//	{
//		printf("Invalid length of array");
//		return 1;
//	}
//	int* array = (int*)malloc(length * sizeof(int));
//	if (array == NULL)
//	{
//		printf("Memory allocation failed!\n");
//		return 1;
//	}
//
//	for (int i = 0; i < length; i++)
//	{
//		printf("input the %d number", i + 1);
//		scanf("%d", &array[i]);
//	}
//
//
//	int maxValue = max_array(array, length);
//
//	printf("The max value of the arry is %d", &maxValue);
//	free(array);
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>


int max_array(int array[], int length)
{
	int i = 0;
	int max = array[0];
	for (i = 0; i < length; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
	}return max;
}



int main()
{
	int length = 0;
	printf("input the length of the array:");
	scanf("%d", &length);
	if (length < 0)
	{
		printf("Invalid number");
		return 1;
	}

	int* array = (int*)malloc(length * sizeof(int));
	int i = 0;
	if (array == NULL)
	{
		printf("Not valid");
		return 1;
	}
	for (i = 0; i<length; i++)
	{
		printf("input the %d number: ", i + 1);
		scanf("%d", &array[i]);
	}

	int max = max_array(array, length);
	printf("The n=max number is : %d", max);
	
	free(array);
		return 0;
}
































