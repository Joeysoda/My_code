#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	while (a <10)
	{
		a++;
		{if (a == 5)
			continue;//��ʾ�����˴�ѭ����������ݼ�����ʼwhile��һ�е�
		}//break������ֹȫ��ѭ��,ֱ���������
		printf("%d ", a);
		a = a + 1;
	}
	return 0;
}