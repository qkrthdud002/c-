#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int n;
	scanf_s("%d", &n);
	printf("%d\n", n++);
	printf("%d", ++n);

	return 0;
}