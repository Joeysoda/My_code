#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int number[10];
	int sum=0,
		i = 0;
	printf("输入10个整数: \n");
	for (int i = 0; i < 10; i++)
	{
		printf("第%d个整数", i + 1);
		scanf("%d", &number[i]);
		sum += number[i];
	}
	double average = (double)sum / 10;
	printf("平均数是%lf\n", average);
	scanf("%d %d");
	return 0;
}