#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int a1, a2, b1, b2;
	scanf_s("%d %d\n%d %d", &a1, &a2, &b1, &b2);
	//int c = 0;
	//((a1 > b1 && a2 > b2) != (a1 > b1 && a2 > b2));
	//printf("%d", c);

	//(a1 != b1&& a2 != b2);
	printf("%d", a1 > b1 && a2 > b2 && a1 > b1 && a2 > b2);// - 1
	//printf("%d", (a1 > b1 && a2 > b2) && (a1 > b1 && a2 > b2)); - 2
	//1번 2번 둘다 가능한 답
	return 0;
}