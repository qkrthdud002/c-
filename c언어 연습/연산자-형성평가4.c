#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);

	printf("%d %d\n", ++a, b--);
	printf("%d %d\n", a, b);
	return 0;
}