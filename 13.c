#include <stdio.h>
int main()
{
    int i, a, num = 0;
    scanf("%d", &num);
    int max = 0;
    for ( i = 0; i <= num; i++)
    {
        scanf("%d", &a);
        if (max <= a)
        {
            max = a;
        }
    }
    printf("%d", max);
    
    return 0;
}