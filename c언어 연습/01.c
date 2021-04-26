#pragma warning(disable : 4996)
#include <stdio.h>

/*int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	printf("%.2lf\n", (float)a / b);

	return 0;
}*/

int main_01(void)
{
	int dan, num = 0;
	printf("¸î´Ü? ");
	int i;
	scanf_s("%d", &i);

	for (dan = i; dan <= i; dan++) {
		for (num = 1; num <= 9; num++)
			printf("%d X %d=%d\n", dan, num, dan * num);
	}
	return 0;
}