#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, n;

	printf("숫자를 입력하시오: ");
	scanf("%d", &num);
	printf("n을 입력하시오: ");
	scanf("%d", &n);

	printf("새로운 값= %d\n", num | 1 << n);

	return 0;
}
