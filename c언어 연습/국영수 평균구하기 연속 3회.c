#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int Korean = 0;
	int English = 0;
	int Math = 0;
	int count = 0;

	while (count < 3) {
		printf("국어 영어 수학 점수 입력 : ");
		scanf("%d %d %d", &Korean, &English, &Math);
		printf("(%d번째) 국어 영어 수학 평균 %d\n", count+1, (Korean + English + Math) / 3);
		count++;
	}

	return 0;
}
