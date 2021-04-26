#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	char a = 0;
	scanf_s("%c", &a);

	if (a == 'A') {
		printf("Excellent");
	}
	else if (a == 'B') {
		printf("Good");
	}
	else if (a == 'C') {
		printf("Usually");
	}
	else if (a == 'D') {
		printf("Effort");
	}
	else if (a == 'F') {
		printf("Failure");
	}
	else
		printf("error");
	return 0;
}