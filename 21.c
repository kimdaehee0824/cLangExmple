#include <stdio.h>
int main()
{
    int arr[100][100];
    int n, m, i, j, num, si, sj;
    scanf("%d %d", &n, &m);
    si = sj = 0;
    num = 1;
    while (num <= n * m)
    {
        for (i = si, j = sj; i >= 0 && j < m; i--, j++)
            arr[i][j] = num++;

        if (si < n - 1)
        {
            si+;
        }
        else
        {
            sj++;
        }
    }

    // 출력
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}