#include <stdio.h>
int main()
{
    int arr1[100][100];
    int n, m, num = 1;
    scanf("%d %d", &n, &m);
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            arr1[i][j] = num++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
