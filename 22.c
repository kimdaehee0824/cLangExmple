#include <stdio.h>
int main()
{
    int arr1[5][5] = {0};
    int n, num = 1;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            arr1[i][j] = num++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
