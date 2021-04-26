#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int n1, n2;
	scanf_s("%d %d", &n1, &n2);
	if (n1 > n2) {
		for (int i = n1; n2<=i; n2++) {
			printf("%d ", n2);
		}
	}
	else  {
		for (int i = n2; n1 <= i; n1++) {
			printf("%d ", n1);
		}
	}
	return 0;
}