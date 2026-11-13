#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double money, tax;

    printf("과세 표준을 입력하시오(만원): ");
    scanf("%lf", &money);

    if (money <= 1000) {
        tax = money * 0.08;
    }
    else if (money <= 4000) {
        tax = 80 + (money - 1000) * 0.17;
    }
    else if (money <= 8000) {
        tax = 590 + (money - 4000) * 0.26;
    }
    else {
        tax = 1630 + (money - 8000) * 0.35;
    }

    printf("소득세는 %.0lf만원입니다.\n", tax);

    return 0;
}
