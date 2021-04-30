#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int num1, num2, sum = 0, div = 0;
	scanf_s("%d %d", &num1, &num2);
	if (num1 > num2) {
		int temp;
		temp = num2;
		num2 = num1;
		num1 = temp;
	}
	for (int i = num1; i <= num2; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
			div++;
		}
	}
	printf("sum : %d\n", sum);
	printf("avg : %.1lf", (double)sum / div);
	return 0;
}