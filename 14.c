#include <stdio.h>
int main()
{
    double kg;
    double cm;
    scanf("%lf %lf", &cm, &kg);

    double kg_standard = ( cm - 100 ) * 0.9;
    double sum = (kg - kg_standard) * 100 / kg_standard;

    if ( sum <= 10)
        printf("정상");

    else if (10 <= sum && sum <= 20)
        printf("과체중");

    else if ( sum >= 20)
        printf("비만");

    return 0;
}