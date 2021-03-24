#include <stdio.h>
int main()
{
    int i, a, x, num = 0;
    scanf("%d %d", &num, &x);
    int max = 0;
    for ( i = 0; i <= num; i++)
    {
        scanf("%d", &a);
        if (x > a)
        {
            printf("%d ", a);
        }
    }
    
    return 0;
}