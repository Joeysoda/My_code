#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 5;
	if (4 == a)//˫�Ⱥ������жϣ����Ⱥ����ڸ�ֵ
		//����д��������Ч��ֹbug�Ĳ���
	{
			printf("hehe\n");
}
	return 0;
}