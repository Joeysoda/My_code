#include <stdio.h>
#include <stdbool.h>

// 判断一个数是否为素数
bool is_prime(int num) {
    if (num <= 1) {
        return false; // 1和负数不是素数
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // 如果能被小于等于它平方根的数整除，不是素数
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
