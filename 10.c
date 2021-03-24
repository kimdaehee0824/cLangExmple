//코드업 1212
#include <stdio.h>
int main()
{
    long int a, b, c = 0;
    long int A, B, C; //순서대로 가장 큰 수

    scanf("%ld %ld %ld", &a, &b, &c);

    if (a > b && a > c)
    {
        if (b > c)
            printf("%ld %ld %ld", c, b, a);
        else
            printf("%ld %ld %ld", b, c, a);
    }
    if (b > a && b > c)
    {
        if (a > c)
            printf("%ld %ld %ld", c, a, b);
        else
            printf("%ld %ld %ld", a, c, b);
    }
    if (c > a && c > b)
    {
        if (a > b)
            printf("%ld %ld %ld", b, a, c);
        else
            printf("%ld %ld %ld", a, b, c);
    }
    if (c == a && c == b)
    {
        if (a == b)
            printf("%ld %ld %ld", b, a, c);
    }

    else
    {
        if (a == b)
        {
            if (b < c)
            {
                printf("%ld %ld %ld", a, b, c);
            }
            else
            {
                printf("%ld %ld %ld", c, a, b);
            }
        }
    } 
    return 0;
}