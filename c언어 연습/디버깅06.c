#include <stdio.h>
#include <time.h>
#pragma warning(disable : 4996)

int main_2(void)
{
	int a = 0;
	time_t now;
	struct tm tt;
	time(&now);
	tt = *localtime(&now);
	a = tt.tm_year;
	int a1 = a;
	a += tt.tm_mon;
	int a2 = a;
	a += tt.tm_mday;
	int a3 = a;
	printf("%d %d %d\n", a1, a2, a3);

	return 0;
}