#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char ch;

    printf("문자를 입력하시오: ");
    scanf("%c", &ch);

    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
        printf("알파벳입니다.\n");
    }
    else if (ch >= 48 && ch <= 57) {
        printf("숫자입니다.\n");
    }
    else {
        printf("특수문자입니다.\n");
    }

    return 0;
}
