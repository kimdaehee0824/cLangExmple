#include <stdio.h>
a
int Fun1(int A, int B, int C);
int Fun2(int A, int B, int C);
int Fun3(int A, int B, int C);
int Fun4(int A, int B, int C);

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    printf("%d\n", Fun1(A, B, C));
    printf("%d\n", Fun2(A, B, C));
    printf("%d\n", Fun3(A, B, C));
    printf("%d\n", Fun4(A, B, C));

    return 0;
}

int Fun1(int A, int B, int C)
{
    return (A + B) % C;
}
int Fun2(int A, int B, int C)
{
    return ((A % C) + (B + C)) % C;
}
int Fun3(int A, int B, int C)
{
    return (A * B) % C;
}
int Fun4(int A, int B, int C)
{
    return ((A % B) * (B % C)) % C;
}