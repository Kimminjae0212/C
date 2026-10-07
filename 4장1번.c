#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double a, b, bmi; //체중, 신장, bmi

	printf("체중을 입력하시오: ");
	scanf("%lf", &a);
	printf("신장을 입력하시오(단위: 미터): ");
	scanf("%lf", &b);

	bmi = a / (b * b);

	printf("BMI: %.2lf", bmi);

	return 0;
}