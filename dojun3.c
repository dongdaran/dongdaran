#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num_count = 0;
    int num = 1;

    while (num_count < 10) {
        num++;
        int is_prime = 1; // ����: num�� �Ҽ���� ����

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                is_prime = 0; // num�� �Ҽ��� �ƴ�
                break;
            }
        }

        if (is_prime) {
            printf("%d ", num);
            num_count++;
        }
    }

    return 0;
}
