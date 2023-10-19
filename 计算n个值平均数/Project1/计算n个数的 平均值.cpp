#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int a, i = 0;
    float num = 0.0;
    float sum = 0.0;

    printf("请输入要输入的数字个数: ");
    scanf("%d", &a);

    if (a <= 0) {
        printf("无效的数字个数。\n");
        return 1;
    }

    printf("请输入 %d 个数字，以空格或回车分隔:\n", a);

    for (i = 0; i < a; i++) {
        if (scanf("%f", &num) == 1) {
            sum += num;
        }
        else {
            printf("无效的输入。\n");
            return 1;
        }
    }

    printf("这 %d 个数字的平均值是: %f\n", a, sum / a);

    return 0;
}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
/*
int main() {
    int a;
    float num, sum = 0.0;

    printf("请输入要输入的数字个数: ");
    scanf("%d", &a);

    if (a <= 0) {
        printf("无效的数字个数。\n");
        return 1;
    }

    printf("请输入 %d 个数字，以空格或回车分隔:\n", a);

    for (int i = 0; i < a; i++) {
        if (scanf("%f", &num) == 1) {
            sum += num;
        }
        else {
            printf("无效的输入。\n");
            return 1;
        }
    }

    printf("这 %d 个数字的平均值是: %.2f\n", a, sum / a);

    return 0;
}*/
