#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int number[10];
	int sum=0,
		i = 0;
	printf("����10������: \n");
	for (int i = 0; i < 10; i++)
	{
		printf("��%d������", i + 1);
		scanf("%d", &number[i]);
		sum += number[i];
	}
	double average = (double)sum / 10;
	printf("ƽ������%lf\n", average);
	scanf("%d %d");
	return 0;
}