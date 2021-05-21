#include <stdio.h>
void func(int n);
int main()
{
    int num;
    func(5);
    return 0;
}
void func(int n)
{
    if (n < 1)
        return; // 종료조건
    printf("재귀호출 전 : %d\n", n);
    func(n - 1);
    printf("재귀호출 후 : %d\n", n);
}
