#include <stdio.h>
#pragma warning(disable : 4996)

//�Է�  9 7 10 5 33 65 0
//���  odd : 5
//        even: 1
int main(void)
{
	int num;
	int o = 0, e = 0;
	while (1) {
		scanf_s("%d", &num);
		if (num == 0) {
			break;
		}
		if (num % 2 == 0)
			e++;
		else
			o++;
	}
	printf("odd : %d\n", o);
	printf("even : %d", e);

	return 0;
}