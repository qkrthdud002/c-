#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int num, mul3=0, mul5=0;
	for (int i = 1; i <= 10; i++) {
		scanf_s("%d", &num);
		if (num % 3 == 0) {
			mul3++;
		}
		if (num % 5 == 0) {
			mul5++;
		}
	}
	printf("Multiples of 3 : %d\n", mul3);
	printf("Multiples of 5 : %d", mul5);
	return 0;
}