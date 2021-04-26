#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	char A;
	scanf_s("%c", &A);
	for (int i = 0; i < 20; i++) {
		printf("%c", A);
	}
	return 0;
}