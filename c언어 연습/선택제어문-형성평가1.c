#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	if (a > b) {
		printf("%d", a - b);
	}
	else
		printf("%d", b - a);
	return 0;
}