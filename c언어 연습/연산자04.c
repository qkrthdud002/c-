#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	a++;
	printf("%d ", a);
	--b;
	--a;
	printf("%d %d", b, a*b );
	return 0;
}