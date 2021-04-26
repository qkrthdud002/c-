#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int n1=1, n2;
	//scanf_s("%d", &n2);
	while (n1) {
		printf("number? ");
		scanf_s("%d", &n2);
		if (n2 > 0) {
			printf("positive integer\n");
		}
		else if (n2 < 0)
			printf("negative number\n");
		else if (n2 == 0)
			break;
	}
	return 0;
}