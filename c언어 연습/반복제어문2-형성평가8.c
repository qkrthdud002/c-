#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int a, b, n=1, m=1;
	scanf_s("%d %d", &a, &b);
	for (int i = 1; i <= a; i++)//세로 
	{
		for (int j = 1; j <= b; j++)//가로 
		{
			printf("%d ", m);
			m = m + n;
		}
		printf("\n");
		n++;
		m = n;
	}
	return 0;
}