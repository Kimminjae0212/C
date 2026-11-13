#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char ch;

    printf("문자를 입력하시오: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90) {
        printf("대문자입니다.\n");
    }
    else if (ch >= 97 && ch <= 122) {
        printf("소문자입니다.\n");
    }
    else {
        printf("알파벳이 아닙니다.\n");
    }

    return 0;
}
