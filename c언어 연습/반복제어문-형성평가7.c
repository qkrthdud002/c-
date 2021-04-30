#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= 10; i++) {
		printf("%d ", num * i);
	}
	return 0;
}