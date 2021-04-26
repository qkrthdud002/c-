#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int a;
	scanf_s("%d", &a);

	printf("%d\n", a);
	if (a < 0) {
		//printf("%d\n", a);
		printf("minus");
	}
	//else printf("%d", a);
		
	
	return 0;
}