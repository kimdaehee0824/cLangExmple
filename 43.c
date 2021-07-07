#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    int count = 0;
    fgets(str1, 100, stdin);

    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] == 'a' || str1[i] == 'i' || str1[i] == 'e' || str1[i] == 'o' || str1[i] == 'u')
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}