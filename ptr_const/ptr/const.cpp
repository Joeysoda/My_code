#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	const int a = 10;//a���ܱ��޸��ˣ���a�����ϻ��Ǳ�����constֻ�����﷨������һЩ����
//
//	a = 20;//�޸�
//	printf("a=%d\n", a);
//	return 0;
//}

//
////const ������������ָ��
//int main()
//{
//	const int a = 10;
//	int * pa = &a;
//	*pa = 0;
//		printf("%d\n", a);
//	return 0;
//}


//const ����ָ��const���Էŵ�*��ߣ�Ҳ���Էŵ�*�ұ�

int main()
{
	const int a = 10;	
	//	int const* p = &a;   //�����const����*p
	//	int *const p = &a;   //�����const����p


	*p = 0;
	printf("a=%d\n", a);
	return 0;
}