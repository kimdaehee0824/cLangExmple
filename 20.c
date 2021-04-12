#include <stdio.h>
int main()
{
    int arr1[100][100] = {0};
    int n, m, num = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                arr1[i][j] = num++;
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                arr1[i][j] = num++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
