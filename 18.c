#include <stdio.h>
int main()
{
    int i, x;
    scanf("%d", &x);
    int nArr[1000000];
    int max = -1000000, min = 10000000;
    
    for (i = 0; i < x; i++)
    {
        scanf("%d", &nArr[i]);

        if(max < nArr[i])
            max = nArr[i];
        if(min > nArr[i])
            min = nArr[i];
    }

    printf("%d %d", min, max);


    return 0;
}