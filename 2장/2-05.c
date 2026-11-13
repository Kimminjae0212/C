﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	double avg;
	
	printf("정수를 입력하시오: ");
	scanf("%d", &a);
	printf("정수를 입력하시오: ");
	scanf("%d", &b);
	printf("정수를 입력하시오: ");
	scanf("%d", &c);

	avg = (a + b + c) / 3;
	printf("평균은 %lf입니다.", avg); /* %lf는 기본적으로 소수점 이하 6자리까지 나타냄. 
	자릿수를 줄이려면 %.(숫자)lf 형식으로 작성하기.*/

	return 0;
}
