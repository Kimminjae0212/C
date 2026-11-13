#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x, y;
	char a;

	printf("수식을 입력하시오: ");
	scanf(" %lf %c %lf", &x, &a, &y);

	switch (a) {
	case '+':
		printf("%lf", x + y);
		break;

	case '-':
		printf("%lf", x - y);
		break;

	case '*':
		printf("%lf", x * y);
		break;

	case '/':
		if (y == 0) {
			printf("0으로 나눌 수 없습니다.");
		}
		else {
			printf("%lf", x / y);
		}
		break;

	default:
		printf("잘못된 식입니다.");
		break;
	}
	printf("\n");
	return 0;
}
