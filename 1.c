#include <stdio.h>
int main()
{
    int opt;
    double num1, num2;
    double resalt;

    printf("1. 덧셈\t2.뺄셈\t3.곱셈\t4.나눗셈\n");
    printf("선택 : ");
    scanf("%d", &opt);
    printf("두 개의 실수 입력 : ");
    scanf("%lf %lf", &num1, &num2);

    if (opt == 1)
        resalt = num1 + num2;

    if (opt == 2)
        resalt = num1 - num2;

    if (opt == 3)
        resalt = num1 * num2;

    if (opt == 4)
        resalt = num1 / num2;

    printf("결과 : %f\n", resalt);

    return 0;
}