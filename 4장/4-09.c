#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("숫자를 입력하시오: ");
	scanf("%d", &num);
	printf("LSB는 %d", num & 1);

	return 0;
}
