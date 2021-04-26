#include <stdio.h>
#pragma warning (disalbe : 4996)

int main(void)
{
	int age;
	scanf_s("%d", &age);

	if (age >= 20) {
		printf("adult");
	}
	else
		printf("%d years later", 20 - age);
	return 0;
}