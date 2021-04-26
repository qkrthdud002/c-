#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int a;
	scanf_s("%d", &a);

	if (a == 0) {
		printf("zero");
	}
	else if (a > 0) {
		printf("plus");
	}
	else
		printf("minus");
	return 0;
}