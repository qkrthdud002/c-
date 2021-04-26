#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int money = 0;
	int total = 0;

	do {
		printf("저금할 금액을 입력하세요(0입력 종료)");
		scanf("%d", &money);
		total = total + money; //total += money;
		printf("현재 까지의 저금액 %d\n\n", total);
	}
	while (money != 0);
	printf("저축 종료!\n");
	return 0;
}