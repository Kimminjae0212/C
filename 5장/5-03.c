#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;

	printf("요일을 0(일요일)에서 6까지의 정수로 입력하시오: ");
	scanf("%d", &x);

	if (x == 0 || x == 6) {
		printf("주말입니다.");
	}
	else {
		printf("주중입니다.");
	}
	printf("\n");
	return 0;
}
