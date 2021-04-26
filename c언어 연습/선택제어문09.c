#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);

	int min;
	//min = (a < b&& a < c) ? a : (b < c) ? b : c;
	//min = (a < b) ? a : b; , //min = (min < c) ? min : c;
	min=(a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
	printf("%d", min);
	return 0;
}