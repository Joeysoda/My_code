#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////int main()
////{
////	int a = 2 + 10;
////	int b = 2 -10;
////	printf("%d\n", a); printf("%d\n", b);
////	printf("%d\n", 2+10);
////	printf("%d\n", a*b);
////	printf("%lf\n", 7.00/3);
////	printf("%d\n", 7 % 2);
////	printf("%d\n", 7 % -2);
////	printf("%d\n", -7 % 2);
////	printf("%d\n", -7 % -2);//ȡģ����Ľ�����������ɵ�һ��������
////	
////
////	//��ֵ������
////	int a = 0;
////	int b = 0;
////	a = a + 3;
////	a += 3;
////	b = b -= 2;
//
//
//
//
//	
//	return 0;
//}
// 
// 
//	//��Ŀ������
//
//	//ǰ�üӼ�
//int main()
//
//{
//	int a = 2;
//	//int b = ++a;
//	////ǰ�üӼ�,�ȼ�һ��ʹ��
//	//printf("a=%d b=%d\n", a, b);//
//	//���üӼ�
//	int b = a++;
//	printf("a=%d b=%d\n", a, b);//
//	return 0;
//}
//int  main()
//{
//	int a = (int)3.14;
//	printf("%d", a);
//
//	return 0;
//}



//scarf ��printf
//
////printf
//int main()
//{
//	printf("hello\nworld");
//	//ռλ��
//	printf("%-11d", 123);//����ַ�ռλ11,����3���滹��8����λ  
//	printf("%11d\n", 123);//        123
//	//�޶����
//	printf("%6.2f", 3.14);//ǰ�������λҪռ��λ�����С��Ҫռ��λ
//	printf("%*.*f",6,2, 3.14);//�����ֵҲ�������ǺŴ���
//	return 0;
//}
//

//
//int main()
//{
//	int score = 0;
//	printf("������ɼ�: ");
//	scanf("%d", &score);
//	printf("score=%d\n", score);
//	return 0;
//}
//
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int r = scanf("%d, %d, %d %d", &a, &b, &c);//����������ʹ��
//	printf("r=%d\n", r);
//	int r = scanf("%d, %d, %d %d", &a, &b, &c);//���Էŵ�һ��������ʹ��
//
//
//	return 0;
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int  c = 0;
//	scanf("%d,%d,%d", &a, &b, &c);//����ط��ж����������ʱ��Ҳһ��Ҫ�����Ǹ�����
//	printf("%d, %d, %d\n", a, b, c);
//	return 0;
//
//}
//
////
////
//int main()
//{
//	char ch = 0;
//	//int a = 20;
//	scanf("%d", ch);
//	printf("%c--------", ch);
//	return 0;
//}
//
//
//
//
//
////��ֵ����ֵ
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d%*c%d%*c%d",&year,&month,&day);
//	printf("%d %d %d\n", year, month, day);
//	return 0;
//}
// 
// 
// //


// 
//
// 
//  if...else���
//
//int main()
//
//{
//
//	int a = 0;
//	printf("����һ������:");
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("�������һ������");
//	else
//		printf("�������һ��ż��");
//	return 0;
//}



//����ڲ���Ӵ����ŵ����
//
//int main()
//{
//	int age = 0;
//	printf("�������������: ");
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("����\n");
//		printf("����̸����");
//	}
//	else
//	{
//		printf("δ����\n");
//		printf("������̸����");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a=%d b=%d c=%d\n:", a, b, c);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++);
//	{
//		if (i = 5)
//			printf("%d", i);
//	}
//	return 0;
//
//}
//
//
//
//
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d,%d", &a, &b);
//    printf("������%d,����%d ",a/b, a % b);
//    return 0;
//}
int main()
{
    int a, b = 0;
    scanf("%d %d", &a, &b);
    if (a == b)
        printf("%d=%d", a, b);
    else if (a > b)
        printf("%d>%d", a, b);
    else
        printf("%d<%d", a, b);
    return 0;
}














