#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int num;
	scanf_s("%d", &num);
	if (num <= 50) {
		for (int i = 1; i <= num; i++) {
			if (i % 2 == 0)
				printf("%d ", i);
		}
	}
	return 0;
}