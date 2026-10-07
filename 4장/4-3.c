#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int P;
	double D;

	printf("상품 가격을 입력하시오: ");
	scanf("%d", &P);
	printf("할인률을 입력하시오: ");
	scanf("%lf", &D);

	double R = P * D / 100;

	printf("할인된 가격은 %.2lf입니다.\n", P - R);

	return 0;
}
