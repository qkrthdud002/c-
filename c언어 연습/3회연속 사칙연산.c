#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	double num1 = 0;
	double num2 = 0;
	int count = 0;
	while (count <= 3)//(count < 3)
	{
		printf("두 수를 입력하세요:");
		scanf("%lf %lf", &num1, &num2);
		//count++;
		printf("입력받은 두수의 사칙연산 %d회\n", count);
		printf("%.1lf + %.1lf=%.1lf\n", num1, num2, num1 + num2);
		printf("%.1lf - %.1lf=%.1lf\n", num1, num2, num1 - num2);
		printf("%.1lf * %.1lf=%.1lf\n", num1, num2, num1 * num2);
		printf("%.1lf / %.1lf=%.1lf\n", num1, num2, num1 / num2);
		printf("\n");
	}
	return 0;
}