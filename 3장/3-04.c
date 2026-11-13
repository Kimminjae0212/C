#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double x, result;

    printf("x의 값을 입력하시오: ");
    scanf("%lf", &x);

    result = 3.0 * x * x * x - 7.0 * x * x + 9.0;

    printf("결과: %lf\n", result);

    return 0;
}
