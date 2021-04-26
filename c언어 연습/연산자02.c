#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	a += 100; //a=a+100;
	printf("%d ", a);

	b = b % 10;
	printf("%d", b);
	
	return 0;


}	