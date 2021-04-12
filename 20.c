#include <stdio.h>
int main()
{
    int arr1[100][100] = {0};
    int n, m, num = 1;
    scanf("%d", &n);
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                arr1[i][j] = num++;
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
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
