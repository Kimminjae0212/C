#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("삼각형의 내각 2개(빈칸으로 분리): ");
	scanf("%d%d", &a, &b);

	c = 180 - a - b;
	printf("세번째 각은 %d\n", c);

	return 0;
}
