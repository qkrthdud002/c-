#include <stdio.h>
#pragma warning(disable :4996)

int main(void)
{
	int num, sum=0, avg=0, i=0;
	while (1) {
		scanf_s("%d", &num);
		if (num > 100 || 0 > num)
			break;
		sum += num;
		i++;
	}
	printf("sum : %d\n", sum);
	printf("avg : %.1lf", sum / (double)i);
	return 0;
}
//int main(void)
//{
//	int num=0, sum = 0, avg = 0, i=0;
//	do {
//		sum += num;
//		scanf_s("%d", &num);
//		i++;
//	} while (num <= 100);
//	avg = sum / (i-1);
//	printf("sum : %d\n", sum);
//	printf("avg : %.1lf", (double)avg);
//
//	return 0;
//}