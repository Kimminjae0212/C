#include <stdio.h>

double C(double x, double y);

int main(void)
{
	double x = 1.0, y = 2.0;
	printf(" x=%lf, y=%lf, f(x,y)=%lf\n", x, y, C(x, y));

	x = 2.0, y = 0.0;
	printf(" x=%lf, y=%lf, f(x,y)=%lf\n", x, y, C(x, y));

	 x = 2.0, y = 1.0;
	printf(" x=%lf, y=%lf, f(x,y)=%lf\n", x, y, C(x, y));

	return 0;
}

double C(double x, double y)
{
	double sum;
	sum = 1.5 * x + 3.0 * y;

	return sum;
}
