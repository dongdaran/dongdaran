=>내가 짠것
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num_count, num;
	num_count = 1;
	num = 2;

	printf("%d ", num);

	while (num_count < 10) {
		num++;
		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				break;
			}

			printf("%d ", num);
			num_count ++ ;
			break;


		}
		
	}

	return 0;
}

=>지피티
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num_count = 0;
    int num = 1;

    while (num_count < 10) {
        num++;
        int is_prime = 1; // 가정: num은 소수라고 가정

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                is_prime = 0; // num이 소수가 아님
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
