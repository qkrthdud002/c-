#include <stdio.h>
#pragma warning(disable : 4996)

//입력 1 2 3 4 5 6 7 8 9 10 100
//출력 155
//		 14.1

//int main(void)
//{
//	int i = 0, n, sum = 0;
//	do {
//		scanf_s("%d", &n);
//		i++;
//		sum += n;
//	} while (n < 100);
//	printf("%d\n", sum);
//	printf("%.1lf", (double)sum / i);
//	return 0;
//}

int main(void)
{
	int num;
	int sum = 0, i = 0;
	while (1) {
		scanf_s("%d", &num);
		sum += num;
		i++;
		if (num >= 100)break;
	}
	printf("%d\n", sum);
	printf("%.1lf", sum / (double)i);
	return 0;
}