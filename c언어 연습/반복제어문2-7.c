#include <stdio.h>
#pragma warning(disable : 4996)

//int main(void)
//{
//	for (int i = 1; i < 6; i++) {
//		for (int j = i+1; j <= i+5; j++) {
//			printf("%d ", j);
//		}
//		 printf("\n");
//	}
//	return 0;
//}

int main(void)
{
	int c = 0;
	for (int i = 1;i <= 5;i++) {
		c = i + 1;
		for (int j = 1; j <= 5; j++) {
			printf("%d ", c);
			c++;
		}
		printf("\n");
	}
	return 0;
}