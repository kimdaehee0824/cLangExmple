#include <stdio.h>
int main()
{
    int i, num, sum = 0;
    scanf("%d", &num);
    for ( i = 1; i <= num; i++)
    {
        printf("%d\n", i);
        printf("\n");

        for (int j = 1; j < 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }

    
    return 0;
}