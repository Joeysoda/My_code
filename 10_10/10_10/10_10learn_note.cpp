#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//ת���ַ�
//	//   \?  ����д��������ʺŵ�ʱ�򣬷�ֹ��ʶ��Ϊ����ĸ�ʣ��ϱ�����������������
//	
//	//   \'   ���ڱ�ʾ�ַ�����  '
//
//	printf("%s\n", "a");
//	printf("%s\n", "\'");
//
//	//   \"   ���ڱ�ʾ�ַ�����  "
//	printf("%s\n", "\"");
//
//	// \\   ���ڱ�ʾ"\"
//	printf("c:\test\test.c");
//	printf("c:\\test\\test.c");
//  
//	// \a ���ڵ��Ա���
//
//	// \b  ����backapace
//	printf("abcde\bfghi"); //abcdfghi
//
//	// 
//	// 
//	// 
//	//
//
//	return 0;
//
//}
//int main()
//{
//	printf("%c\n", '\130');
//	//   \ddd dΪ�������֣�ת��Ϊ�˽�������ת��Ϊ�˽�������X
//	//   \ddd Ϊ�ַ��İ˽��Ʊ�ʾ��ʽ
//
//	return 0;
//}
//#include<string.h>	
//int main()
//{	
//	//strlen  ���ַ����ĳ��ȣ�����\0��ת���ַ�
//	
//	printf("%zd\n", strlen("abc"));//3
//
//	printf("%zd\n", strlen("c:\test\130\test.c"));//13
//
//	return 0;
//}


//�������

//int main()
//{
//	;//�����
//
//	3 + 4;//���ʽ���
//
//	printf("hehe\n");//�����������
//
//	return 0;
//}

//����ֵ
//#include<stdbool.h>
//int main()
//{
//	bool flag = false;
//	if (flag)
//		printf("hehe");
//	return 0;
//}


//
////�ֽ�����
//int main()
//{//sizeof ��������������size_t��size_t��һ���޷��ŵ��������������������ڴ�ӡ��ʱ����%zd
//	printf("%zd\n", sizeof(char));//
//	printf("%zd\n", sizeof(bool));//1
//	printf("%zd\n", sizeof(short ));//2
//	printf("%zd\n", sizeof(int));//4
//	printf("%zd\n", sizeof(float));//4
//	printf("%zd\n", sizeof(long));//4   C language sizeof��long�� >=sizeof(int)
//	printf("%zd\n", sizeof(long long));//8
//	printf("%zd\n", sizeof(double));//8
//	printf("%zd\n", sizeof(long double));//8
//
//	printf("%d\n", sizeof(3.14));//double
//	printf("%d\n", sizeof(3.14f));//float
//
//	return 0;
//}

//
////sizeof()��������ݲ�����
//int main()
//{
//	short s = 2;
//		int b = 10;
//		printf("%zd\n", sizeof(s =b+1));
//		printf("s=%d\n", s);
//
//}


//signed undigned
//int ======signed int �з��ŵ�����    ����λ�ĵ�һλ��������������ŵ�
//int ----------unsigned int ֻ�ܴ����ŵ�����

//char �п������з��ŵ�signed char�� Ҳ������unsigned char

//
//int main()
//{
//	int age = 12;//��������
//	printf("%d\n", age);
//
//}


////



//
//int b = 100;//ȫ�ֱ���
//
//int main()
//{
//	{
//		int a = 10;//�ֲ��������ڴ������ڲ���ʹ��
//		printf("%d\n", a);
//	}
//	return 0;
//
//}

int b = 100;//ȫ�ֱ���

int main()
{
	{
		int a = 10;//�ֲ��������ڴ������ڲ���ʹ��
		printf("%d\n", a);
	}
	return 0;

}