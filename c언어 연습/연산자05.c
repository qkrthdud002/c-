#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{//�񱳿�����
	int a, b;
	int c;
	scanf_s("%d %d", &a, &b);
	
	c = (a == b);
	printf("%d\n", c);

	c = (a != b);
	printf("%d", c);

	return 0;
}