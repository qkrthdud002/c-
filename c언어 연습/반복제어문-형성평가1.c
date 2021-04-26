#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int num, i;
	scanf_s("%d", &num);
	for (int i = 1;i <= num;i++) {
		//scanf_s("%d", & num);
		printf("%d ", i);
	}
	return 0;
}