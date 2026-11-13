#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.14

int main(void)
{
    double a, b, c; //반지름, 표면, 부피.

    printf("반지름을 입력하시오: ");
    scanf("%lf", &a);

    b = 4.0 * PI * (a * a);
    c = 4.0 / 3.0 * PI * (a * a * a);

    printf("구의 표면적: %lf\n", b);
    printf("구의 부피: %lf\n", c);

    return 0;
}
