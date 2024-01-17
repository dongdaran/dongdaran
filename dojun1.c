#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int want;

	printf("원하는 숫자를 입력해주세요 : ");
	scanf("%d", &want);
	printf("\n");

	printf("16진수로 변환함ㅋ : %x", want);
	
	return 0;
	

}