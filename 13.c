#include <stdio.h>
int main()
{
    int num;
    do
    {
        printf("자연수를 입력하세요(종료는 0):");
        scanf("%d", &num);

        if (num % 2)
        {
            printf("%d 는 홀수!\n", num);
        }
        else
        {
            printf("%d 는 짝수!\n", num);
        }

    } while (num != 0);

    printf("종료합니다!\n");

    return 0;
}