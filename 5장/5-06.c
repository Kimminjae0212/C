#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;

	printf("신호등의 색깔 입력 ( R, G, Y): ");
	scanf("%c", &ch);

	if (ch == 'r' || ch == 'R') {
		printf("정지!");
	}
	else if (ch == 'g' || ch == 'G') {
		printf("진행!");
	}
	else {
		printf("주의!");
	}
	printf("\n");
	return 0;
}
