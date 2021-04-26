#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int num, sum=0;
	scanf_s("%d", &num);
	if (num <= 100) {
		for (int i = num; i <= 100; i++)
			sum += i;
		printf("%d", sum);
	}
	return 0;
}