#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int a;
	printf("Number? ");
	scanf_s("%d", &a);

	switch (a) {
	case 1:
		printf("dog");
		break;
	case 2:
		printf("cat");
		break;
	case 3:
		printf("chick");
		break;
	default:	
		printf("I don't know.");
		//break;
	}
	
	//printf("I don't know.");
	return 0;
}