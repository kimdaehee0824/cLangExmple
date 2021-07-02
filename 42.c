#include <stdio.h>
#include <string.h>
int main()
{

    int TCCount;
    int count, len;
    char TC[80] = "";

    scanf("%d", &TCCount);
    int sum;
    while(TCCount--)
    {
        scanf("%s", TC);

        len = strlen(TC);

        count = 0;
        sum = 0;
        for (int i = 0; i < len; i++)
        {
            if (TC[i] == 'O')
            {
                count++;
            }
            else
                count = 0;

            sum += count;
        }
        printf("%d\n", sum);
    }    
    
    return 0;
}

