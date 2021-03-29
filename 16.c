//codeup1358
#include <stdio.h>
int main()
{
    int i;
    int count;
    scanf("%d", &count);
    for (i = 1; i <= count / 2 + 1; i++)
    {
        for (int j = (count + 1) / 2 - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}