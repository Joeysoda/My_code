#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar() )!= EOF)//键盘获取一个CTRL+Z getchar结束
	{//EOF end of file文件结束标志
		putchar(ch);
	}

	/*int ch = getchar();
	putchar(ch);
	printf(" %c\n", ch);*/
	return 0;
}