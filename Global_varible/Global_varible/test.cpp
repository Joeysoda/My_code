#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//
////ÉùÃ÷Íâ²¿·ûºÅ
//extern int g_val;
//
//int main()
//{
//	printf("%d", g_val);
//	return 0;
//}

extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 15;
	int c = Add(a, b);
	printf("%d\n", c);

	return 0;
}