#include <stdio.h>
#pragma warning(disable : 4996)

//조건식이 false일 결우(do~while문 종료)
int main(void)
{
	int i = 6;
	do {
		printf("i:%d\n", i);
	} while (i <= 7);

	return 0;
}