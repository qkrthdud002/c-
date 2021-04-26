#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	double kg;
	scanf_s("%lf", &kg);

	if (kg > 88.45) {
		printf("Heavyweight");
	}
	else if (kg <= 88.45 && kg > 72.57) {
		printf("Cruiserweight");
	}
	else if (kg <= 72.57 && kg > 61.23) {
		printf("Middleweight");
	}
	else if (kg <= 61.23 && kg > 50.8) {
		printf("Lightweight");
	}
	else {
		printf("Flyweight");
	}
		return 0;
}

