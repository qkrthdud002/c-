#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b && a > c) {
		printf("1 ");
	}
	else
		printf("0 ");
	if (a == b && a == c) {
		printf("1");
	}
	else
		printf("0");
	return 0;
}