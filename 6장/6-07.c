#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
    int x, y, sum = 0;;
    printf("시작정수: ");
    scanf("%d", &x);
    printf("종료정수: ");
    scanf("%d", &y);
    for (; x <= y; x++) sum += x;
    printf("1에서 10까지의 합 = %d", sum);


    return 0;
}
