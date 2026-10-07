#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z, R;

	printf("정수 3개 입력하시오 ");
	scanf("%d%d%d", &x, &y, &z);

	R = x * y - z;
	
	printf("%d*%d-%d = %d", x, y, z, R);

	return 0;
}
