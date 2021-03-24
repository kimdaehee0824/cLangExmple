#include <stdio.h>
int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if ((double)a / b > (double)c / d)
        printf(">");

    else if ((double)a / b == (double)c / d)
        printf("=");

    else if ((double)a / b < c / d)
        printf("<");


    return 0;
}