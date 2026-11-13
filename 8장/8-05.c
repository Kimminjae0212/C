#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int chech_prime(int n);

int main(void)
{
	for (int i = 2; i <= 100; i++) {
		if (chech_prime(i) == 0)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}

int chech_prime(int n)
{
	int prime = 0;
	for(int i = 2; i < n; i++) {
		if (n % i == 0)
			prime = 1;
	}
	return prime;
}
