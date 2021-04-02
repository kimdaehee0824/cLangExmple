#include <stdio.h>

int main()
{
    int n, i;
    int num1 = 0, num2 = 1, sum = 1;
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
    printf("%d", sum);
    return 0;
}