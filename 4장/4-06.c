#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;

	printf("세 자리로 이루어진 숫자를 입력하시오: ");
	scanf("%d", &x);

	printf("백의 자리수: %d\n", x / 100);
	printf("십의 자리수: %d\n", x % 100 / 10);
	printf("일의 자리수: %d\n", x % 100 % 10);

	return 0;
}
