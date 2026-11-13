#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double a;

	printf("실수를 입력하시오: ");
	scanf("%lf", &a);

	printf("지수 형식으로는 %le입니다.\n", a);

	return 0;
}
