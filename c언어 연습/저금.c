#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int money = 0;
	int total = 0;

	do {
		printf("������ �ݾ��� �Է��ϼ���(0�Է� ����)");
		scanf("%d", &money);
		total = total + money; //total += money;
		printf("���� ������ ���ݾ� %d\n\n", total);
	}
	while (money != 0);
	printf("���� ����!\n");
	return 0;
}