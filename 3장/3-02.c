#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double a;

	printf("지수형식으로 실수를 입력하시오: ");
	scanf("%le", &a);

	printf("소수점 표시 형식으로는 %lf입니다.\n", a);

	return 0;
}
