#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar() )!= EOF)//���̻�ȡһ��CTRL+Z getchar����
	{//EOF end of file�ļ�������־
		putchar(ch);
	}

	/*int ch = getchar();
	putchar(ch);
	printf(" %c\n", ch);*/
	return 0;
}