#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int t, w,a;
	scanf_s("%d %d", &t, &w);
	
	a = w + 100 - t;
	printf("%d\n", a);

	if (a > 0) {
		printf("Obesity");
	}
	return 0;
}