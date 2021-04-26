#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);

	printf("%d ", a / b);
	printf("%.2lf", (double)a / b);
	return 0;
}