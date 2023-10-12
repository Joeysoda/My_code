#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	while (a <10)
	{
		a++;
		{if (a == 5)
			continue;//表示跳过此次循环后面的内容继续开始while这一行的
		}//break用于终止全部循环,直接跳出结果
		printf("%d ", a);
		a = a + 1;
	}
	return 0;
}