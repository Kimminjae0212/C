#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double a, b, c, total, avg; //국, 영, 수, 총, 평.
	printf("3과목의 점수를 입력한다: ");
	scanf("%lf%lf%lf", &a, &b, &c);
	
	total = a + b + c;
	avg = total / 3;

	printf("총점=%.2lf\n", total);
	printf("평균=%.2lf\n", avg);

	return 0;
}
