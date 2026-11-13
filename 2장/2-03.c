#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int price, a, total; //price = 가격, a = 개수
	
	printf("상품 가격을 입력하시오: ");
	scanf("%d", &price);
	printf("상품의 개수를 입력하시오: ");
	scanf("%d", &a);

	total = price * a;
	printf("총 가격은 %d입니다.\n", total);
	
	return 0;
}
