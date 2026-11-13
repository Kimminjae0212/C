#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int x, int y);

int main(void)
{
	int x = 3;
	int y = 10;

	power(x, y);
	printf("\n");

	return 0;
}

int power(int x, int y)
{
	int i, RS = 1;

	for (i = 0; i <= y; i++) {
		printf("%d ", RS);
		RS *= x;
	}
}
