//codeup1358
#include <stdio.h>
int main()
{
    int count;
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        for (int j = count; j >= i + 1; j--)
        {
            printf(" ");
        }
    
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
   
    return 0;
}