#define _CRT_SECURE_NO_WARNINGS 1
//# include<stdio.h>
//
//int main()
//{
//	int arr[100];
//	int i;
//	int j;
//	int arr_length;
//	int n = arr_length;
//	for (i = 0; i < n - 1; i++)
//	{
//		int smallest = i;
//		for (j = i+1; j < n; j++)
//		{
//			if (arr[j] < arr[smallest])
//			{
//				smallest = j;
//			}
//			
//		}//第二个for扫描一轮结束之后,进行交换顺序
//		int temp = arr[smallest];
//			arr[smallest] = arr[i];
//			arr[i] = temp;
//	}
	//int a[10];
	//int position = 0;
	//int i=0;
	//int n = 0;
	//printf("input the array a: \n");
	//scanf("%d", i);
	//for (i = 0; i < n - 1; i++)
	//{
	//	for (j = i + 1;j < n; j++)
	//	{
	//		if (position != j)
	//		{

	//		}
	//	}
//	//}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//void selectionSort(int arr[], int size) {
//    for (int i = 0; i < size - 1; i++) {
//        int minIndex = i;
//
//        for (int j = i + 1; j < size; j++) {
//            if (arr[j] < arr[minIndex]) {
//                minIndex = j;
//            }
//        }
//
//        if (minIndex != i) {
//            // Swap arr[i] and arr[minIndex]
//            int temp = arr[i];
//            arr[i] = arr[minIndex];
//            arr[minIndex] = temp;
//        }
//    }
//}
//
//int main() {
//    int size;
//
//    printf("Enter the size of the array: ");
//    scanf("%d", &size);
//
//    if (size <= 0) {
//        printf("Invalid array size\n");
//        return 1;
//    }
//
//    int* arr = (int*)malloc(size * sizeof(int));
//
//    if (arr == NULL) {
//        printf("Memory allocation failed\n");
//        return 1;
//    }
//
//    printf("Enter %d integers:\n", size);
//    for (int i = 0; i < size; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    // Sort the array using selection sort
//    selectionSort(arr, size);
//
//    printf("Sorted array:\n");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    free(arr);  // Don't forget to free the allocated memory
//
//    return 0;
//}




#include<stdio.h>
int main()
{
	int arr[5] = { 23,12,43,5,37 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int i, j, min = 0;

	for (i = 0; i < length-1;i++)
	{
		min = i;
		for (j = i + 1; j < length; j++)
		{
			if (arr[j] < arr[min])
				min=j;
		}
		int temp = arr[i];
	arr[i] = arr[j];
    arr[j] =  temp;
     }/*
	for (i = 0; i < length; i++)
	{
		printf("%d\n", arr[i]);
	}*/
	return 0;
}








































