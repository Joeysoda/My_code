#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//	int* pi = &a;
//	char* pa = (char*)&a;
//	*pa = 0;
//	return 0;
//}


//
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = (char*) & a;
//	printf(" %p\n", pa);
//	printf("%p\n", pc);
//
//	printf("pa+1=%p\n", pa + 1);//+1
//	printf("pc+1=%p\n", pc + 1);//+4 
//	//��Ϊ��ָ�������й�ϵ,ָ��������int*ռ��4���ֽ�,ָ��������char*ռ��һ���ֽ�
//
//	return 0;
//}

//pointer ���array
int main()
{
	int arr[10] = { 0 };
	int i = 0;

	int* p = &arr[0];//��ȡ�����е�һ�����ֵĵ�ַ,����p

	//��ֵpΪ1
	for (i = 0; i < 10; i++);//ʮ������,��Ҫʮ��
	{
		*p = 1;
		p++;//��Ϊ������int* ÿ�μ�1,��ַ��4

	}



	//��ӡ����
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);

	}


	return 0;




}