#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);

	printf("%d / %d = %d...%d", a, b, a/b, a%b);
	return 0;
}