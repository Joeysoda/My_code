#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
	{
	int a = 0;
	/*printf("integer:");*/
		scanf("%d", &a);//%d ���治�ܰ����ո񣬷����޷���ȡ��ȷ�û�����
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
			printf("������\n");
		      break;
		case 6:
		case 7:
			printf("��Ϣ��\n");
			break;
		default:
			printf("not1~7");
			break;
		}

		/*if (1 == a)
			printf("����1\n");
		else if (2 == a)
			printf("����2\n");
		...*/
		return 0;
	}
