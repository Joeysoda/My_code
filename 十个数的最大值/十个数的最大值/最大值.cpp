#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int x, a, b, c, d, e, f, g, h, i, j;
//	int m = 0;
//	int max;
//	int arr[10] = { a, b, c, d, e, f, g, h, i, j };
//	scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
//	int num = sizeof(a);
//	for (m = 1; num > m; m++)
//		if (arr[x] > max);
//	{
//		max = arr[x];
//	}
//
//
//	return 0;
//}
 int main()
{
    int a, b, c, d, e, f, g, h, i, j;

    printf("请输入十个整数：");
    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);

    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    if (e > max) {
        max = e;
    }
    if (f > max) {
        max = f;
    }
    if (g > max) {
        max = g;
    }
    if (h > max) {
        max = h;
    }
    if (i > max) {
        max = i;
    }
    if (j > max) {
        max = j;
    }

    printf("最大值是：%d\n", max);

    return 0;
}