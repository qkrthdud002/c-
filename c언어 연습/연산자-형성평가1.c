#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int a, b, c, d;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	int sum = a + b + c + d;
	printf("sum %d\n", sum);
	printf("avg %d", sum / 4);
	return 0;
}