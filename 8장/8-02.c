#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_bigger(double x, double y);

int main(void)
{
	double x, y;

	printf("실수를 입력하시오: ");
	scanf("%lf", &x);

	printf("실수를 입력하시오: ");
	scanf("%lf", &y);

	printf("더 큰수는 %lf입니다.\n", get_bigger(x, y));

	return 0;
}

double get_bigger(double x, double y)
{
	double MAX = x;
	if (x < y)
		MAX = y;

	return MAX;

}
