#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void multimes(int a, int b) {
	if (a >=  b) {
		for (int i = b; i <= a; i++) {
			for (int j = 1; j < 10; j++) {
				printf("%d * %d = %d\n", i, j, i * j);
			}
			printf("\n");
		}

	}

	else {
		for (int i = a; i <= b; i++) {
			for (int j = 1; j < 10; j++) {
				printf("%d * %d = %d\n", i, j, i * j);
			}
			printf("\n");
		}
	}

}


int main() {
	int input_a, input_b;
	printf("몇단부터 몇단까지 구구단을 보고 싶으신가요? : ");
	scanf("%d %d", &input_a, &input_b);
	printf("\n");
	multimes(input_a, input_b);

	return 0;

}
