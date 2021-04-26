#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
	double a;
	scanf_s("%lf", &a);

	switch ((int)a) {

	case 4:
		printf("scholarship");
		break;
	case 3:
		printf("next semester");
		break;
	case 2:
		printf("seasonal semester");
		break;
	case 1:
		printf("retake");
		break;
	}
		return 0;
}