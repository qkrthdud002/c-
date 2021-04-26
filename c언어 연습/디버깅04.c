#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("sum %d\n", (int)a + (int)b + (int)c);
	int d;
	d = (a + b + c) / 3;

	printf("avg %d", d);
	return 0;
}