#include <stdio.h>
int isPrime(int);
int main()
{
    int N, TC, whatCount, resalt;
    scanf("%d\n", &whatCount);
    for (int i = 0; i < whatCount; i++)
    {
        scanf("%d ", &N);
        if (isPrime(N) == 1)
            TC++;
        else
            break;
    }
    printf("\n");
    printf("%d", TC);

    return 0;
}

int isPrime(int N)
{
    int i;
    for (i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
            return 0;
    }
    return 1;
}