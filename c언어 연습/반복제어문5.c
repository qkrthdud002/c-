#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) 
{
	int num;
	while (1) {
		scanf_s("%d", &num);
		if (num == -1)
			break;
		if (num % 3 == 0)
			printf("%d\n", num / 3);
	}
	return 0;
}