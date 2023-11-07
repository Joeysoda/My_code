#include <stdio.h>
#include <stdbool.h>

// �ж�һ�����Ƿ�Ϊ����
bool is_prime(int num) {
    if (num <= 1) {
        return false; // 1�͸�����������
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // ����ܱ�С�ڵ�����ƽ����������������������
        }
    }

    return true;
}

int main() {
    printf("Prime numbers between 100 and 200:\n");
    for (int num = 100; num <= 200; num++) {
        if (is_prime(num)) {
            printf("%d\n", num);
        }
    }

    return 0;
}
