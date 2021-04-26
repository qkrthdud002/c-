#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int n, avg=0, a=0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a);
		avg = avg + a;
	}
	printf("avg : %.1lf\n", (double)avg/n);
		if ((double)avg / n >= 80) {
			printf("pass");
		}
		else if ((double)avg / n < 80) {
			printf("fail");
		}
	return 0;
}