#include <stdio.h>
int main()
{
    int i, num = 0;
    scanf("%d", &num);
    for ( i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            if (i  0)
            {
                printf("%d", i);
            }
        }
    }
    return 0;
}