#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	char g; 
	int age;

	scanf_s("%c %d",  &g, &age);
	
	//char F = 0, M = 0;

	if (g == 'M' && age >= 18) {
		printf("MAN");
	}
	else if (g == 'M' && age < 18) {
		printf("BOY");
	}
	else if (g == 'F' && age >= 18) {
		printf("WOMAN");
	}
	else  //(g == 'F' && age < 18) {
		printf("GIRL");
	//}

	return 0;
}

int main() {

    char a;
    int b;

    scanf("%c %d", &a, &b);

    if (a == 'M' && b < 18) {
        printf("BOY");
    }
    else if (a == 'F' && b < 18) {
        printf("GIRL");
    }
    else if (a == 'M' && b >= 18) {
        printf("MAN");
    }
    else {
        printf("WOMAN");
    }

    return 0;
}