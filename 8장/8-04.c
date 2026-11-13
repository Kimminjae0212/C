#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_divisor(int x);

int main(void)
{
	int C;
	printf("정수를 입력하시오: ");
	scanf("%d", &C);
	get_divisor(C);

	return 0;
}

int get_divisor(int x)
{
	printf("%d의 약수: ", x);
	for (int i = 1; i <= x; i++) {
		if (x % i == 0)
			printf("%d ", i);
	}
	printf("\n");
}
