#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int num, i=0;
	while (1) {
		scanf_s("%d", &num);
		if (num == 0)
			break;
		else if (num % 3 != 0 && num % 5 != 0)
			i++;
	}
	printf("%d", i);
	return 0;
}