#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);

	// 0 : ����
	// 1�� ����� ��� �� : ��
	
	printf("%d %d", a && b, a || b);
}