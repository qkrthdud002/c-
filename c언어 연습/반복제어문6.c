#include <stdio.h>
#pragma warning(disable : 4996)

//int main(void)
//{
//	int num=1;
//	for (int i = 0; num == 1 || num == 2 || num == 3 || num == 4; i) {
//		printf("1. Korea\n2. USA\n3. Japan\n4. China\n");
//		printf("number? ");
//		scanf_s("%d\n\n", &num);
//		switch (num) {
//		case 1:
//			printf("Seoul\n\n");
//			break;
//		case 2:
//			printf("Washington\n\n");
//			break;
//		case 3:
//			printf("Tokyo\n\n");
//			break;
//		case 4:
//			printf("Beijing\n\n");
//			break;
//		default:
//			printf("\n\nnone");
//		}
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
    int num;
    int flag = 0;
    while (1)
    {
        printf("1. Korea\n");
        printf("2. USA\n");
        printf("3. Japan\n");
        printf("4. China\n");
        printf("number? ");
        scanf("%d", &num);

        switch (num)
        {
        case 1:
            printf("\nSeoul\n\n");
            break;
        case 2:
            printf("\nWashington\n\n");
            break;
        case 3:
            printf("\nTokyo\n\n");
            break;
        case 4:
            printf("\nBeijing\n\n");
            break;
        default:
            printf("\nnone");
            flag = 1;
            break;
        }
        if (flag == 1) break;
    }
}