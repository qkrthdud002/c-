#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	double a, b;
	scanf_s("%lf %lf", &a, &b);
	
	int mul1 = (int)(a * b);
	int mul2 = (int)a * (int)b;

	printf("%d %d", mul1, mul2);
	return 0;
}