#include <stdio.h>
int main()
{
    int i;
    char arr[100];
    fgets(arr, 101, stdin);
    for (i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 65 && arr[i] <= 90)
        {
            printf("%c", arr[i] + 32);
        }
        else if (arr[i] >= 97 && arr[i] <= 122)
        {
            printf("%c", arr[i] - 32);
        }
        else
        {
            printf("%c", arr[i]);
        }
    }
    return 0;
}
