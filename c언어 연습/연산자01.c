#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("sum : %d\n", a + b + c);

	//a+b+c=d;
	printf("avg : %d", (a + b + c) / 3);

	return 0;
}