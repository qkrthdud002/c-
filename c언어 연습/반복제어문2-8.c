#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int num, dan;
	for (dan = 2; dan < 5; dan++) {
		for (num = 1; num < 6; num++) {
			printf("%d * %d =%3d   ", dan, num, dan*num);
		}
		printf("\n");
	}
	return 0;
}