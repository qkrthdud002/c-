#include <stdio.h>
#pragma warning(disable : 4996)

//«Æ¿Ã 2∞≥

/*int main(void)
{
	int hor, ver;
	scanf_s("%d %d", &hor, &ver);

	printf("width = %d\n", hor + 5);
	printf("length = %d\n", ver * 2);
	printf("area = %d\n", (hor + 5) * (ver * 2));
	return 0;
}*/

int main(void)
{
	int hor, ver;
	scanf_s("%d %d", &hor, &ver);

	printf("width = %d\n", hor + 5);
	ver *= 2;
	printf("length = %d\n", ver);
	printf("area = %d\n", (hor + 5) * ver);
	return 0;
}