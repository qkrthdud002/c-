#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%.1lf", (double)(a + b + c) / 3);
	return 0;
}