#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int a, i = 0;
    float num = 0.0;
    float sum = 0.0;

    printf("������Ҫ��������ָ���: ");
    scanf("%d", &a);

    if (a <= 0) {
        printf("��Ч�����ָ�����\n");
        return 1;
    }

    printf("������ %d �����֣��Կո��س��ָ�:\n", a);

    for (i = 0; i < a; i++) {
        if (scanf("%f", &num) == 1) {
            sum += num;
        }
        else {
            printf("��Ч�����롣\n");
            return 1;
        }
    }

    printf("�� %d �����ֵ�ƽ��ֵ��: %f\n", a, sum / a);

    return 0;
}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
/*
int main() {
    int a;
    float num, sum = 0.0;

    printf("������Ҫ��������ָ���: ");
    scanf("%d", &a);

    if (a <= 0) {
        printf("��Ч�����ָ�����\n");
        return 1;
    }

    printf("������ %d �����֣��Կո��س��ָ�:\n", a);

    for (int i = 0; i < a; i++) {
        if (scanf("%f", &num) == 1) {
            sum += num;
        }
        else {
            printf("��Ч�����롣\n");
            return 1;
        }
    }

    printf("�� %d �����ֵ�ƽ��ֵ��: %.2f\n", a, sum / a);

    return 0;
}*/
