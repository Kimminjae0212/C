#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z;

	printf("삼각형의 세변을 입력하시요: ");
	scanf(" %d %d %d", &x, &y, &z);

	if (x == y && y == z) {
		printf("정삼각형");
	}
	else {
		printf("이등변 삼각형");
	}
	printf("\n");
	return 0;
}
