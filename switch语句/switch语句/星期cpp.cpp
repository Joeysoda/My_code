#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
	{
	int a = 0;
	/*printf("integer:");*/
		scanf("%d", &a);//%d 后面不能包含空格，否则无法读取正确用户输入
		switch (a)
		{
		case 1:
				printf("Monday\n");
		     break;
		case 2:
			printf("Tuesday\n");
		     break;
		case 3:
			printf("Wednesday\n");
			 break;

		case 4:
		case 5:
			printf("工作日\n");
		      break;
		case 6:
		case 7:
			printf("休息日\n");
			break;
		default:
			printf("not1~7");
			break;
		}

		/*if (1 == a)
			printf("星期1\n");
		else if (2 == a)
			printf("星期2\n");
		...*/
		return 0;
	}
