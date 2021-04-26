#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int a;
	scanf_s("%d", &a);
	
	if (a%4==0&&a%100!=0||a%400==0) {
		printf("leap year\n");
	}
	else
		printf("common year\n");
	return 0;
}

//int main(void)
//{
//	int a;
//	scanf_s("%d", &a);
//
//	switch (400/a==0) {
//	case 1:
//		printf("leap year");
//		break;
//	case 0:
//		printf("common year");
//		break;
//	}
//	
//	switch (4 / a == 0) {
//	case 0:
//		printf("leap year");
//		break;
//	case 1:
//		printf("common year");
//		break;
//	}
//	switch (100 / a != 0) {
//	case 1:
//		printf("common year");
//		break;
//	case 0:
//		printf("leap year");
//		break;
//	}
//	return 0;
//}