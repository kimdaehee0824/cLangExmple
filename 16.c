#include <stdio.h>
int main()
{
    int a, b, c, sum = 0;
    int big;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b== c)
        printf("%d", 10000 + a * 1000);
    else if (a == b || a == c || b == c)
    {
        if (a == b)
            printf("%d", 1000 + a * 100);
        else if (a == c)
            printf("%d", 1000 + a * 100);
        else if (b == c)
            printf("%d", 1000 + b * 100);
    }
    else if (a != b && a != c)
    {
        if (a > b)
        {
            if (a > c)
                printf("%d", a * 100);
            else
                printf("%d", c * 100);
        }
        else if (b > a)
        {
            if (b > c)
                printf("%d", b * 100);
            else
                printf("%d", c * 100);
        }
        else if (c > a)
        {
            if (c > b)
                printf("%d", c * 100);
            else
                printf("%d", b * 100);
        }
    }
    
    return 0;
}