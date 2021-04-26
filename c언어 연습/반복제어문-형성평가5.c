#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int b, h;
	char i=0;
	while (1) {
		printf("Base = ");
		scanf_s("%d", &b);
		printf("Height = ");
		scanf_s("%d", &h);
		printf("Triangle width = %.1lf\n", (double)(b * h)/2);
		printf("Continue? ");
		scanf_s(" %c", &i);
		if (i != 'y' && i != 'Y') {
			//printf("%d", i);
			break;
		}
		
	}
	return 0;
}