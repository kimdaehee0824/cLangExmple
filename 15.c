#include <stdio.h>
int main()
{
    int i;
    int count;
    scanf("%d", &count);

    for ( i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            printf("*");
        }
        printf("\n");

    }
    

}