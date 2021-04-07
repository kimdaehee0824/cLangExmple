#include <stdio.h>
int main()
{
    double nArr[5];
    double sum = nArr[0];
    double sum2 = nArr[0];
    double sum3 = 0, sum4 = 0;
    int i;

    printf(" 배열의 요소 5개를 입력하세요.\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%lf", &nArr[i]);
    }

    printf("\n배열의 요소\n");
    for (i = 0; i < 5; i++)
    {
        printf("%lf ", nArr[i]);
    }
    printf("\n");
    for ( i = 0; i < 5; i++)
    {
        if (nArr[0] < nArr[i + 1])
        {
            sum = nArr[i];
        }
    }
    printf("최댓값 : %lf ", sum);

    for (i = 0; i < 5; i++)
    {
        if (nArr[0] > nArr[i])
        {
            sum2 = nArr[i];
        }
    }
    printf("최솟값 : %lf ", sum2);

    for (i = 0; i < 5; i++)
    {
        sum3 += nArr[i];
    }

    printf("합계 : %lf ", sum3);

    for (i = 0; i < 5; i++)
    {
        sum4 += nArr[i];
    }
    double x = sum4 / 5;
    printf("평균 : %lf ", x);

    return 0;
}