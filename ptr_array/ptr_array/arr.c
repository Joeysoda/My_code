#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//pointer ���array
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int* p = &arr[0];//��ȡ�����е�һ�����ֵĵ�ַ,����p

	//��ֵpΪ1
	for (i = 0; i < 10; i++);//ʮ������,��Ҫʮ��
	{
		*p = 1;//��ֵΪ1
		p++;//��Ϊ������int* ÿ�μ�1,��ַ��4
	}

	p = &arr[0];
	//��ӡ����
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}

	 
	return 0;
}





