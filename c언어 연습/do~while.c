#include <stdio.h>
#pragma warning(disable : 4996)

//���ǽ��� false�� ���(do~while�� ����)
int main(void)
{
	int i = 6;
	do {
		printf("i:%d\n", i);
	} while (i <= 7);

	return 0;
}