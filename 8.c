#include <stdio.h>
int main()
{
    double kg, m;
    double fat, fat2;

    scanf("%lf %lf", kg, m);

    fat = (m - 100) * 0.9;
    fat2 = (kg - fat) * 100 / fat;

    if (fat2 <= 10)
    {
        printf("정상");
    }

    else if (fat2 >= 10)
    {
        printf("과체중");
    }

    else
    {
        printf("비만");
    }
    
    return 0;
    
}