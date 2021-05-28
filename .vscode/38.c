#include <stdio.h>
int GCD(int a, int b);
void Input(int arr[], int len);
long long SumGCD(int arr[], int len);
int main()
{
    int TC, num;
    long long int result;
    int arr[101] = {0};
    scanf("%d", &TC);
    while (TC--)
    {
        scanf("%d", &num);
        Input(arr, num);
        result = SumGCD(arr, num);
        printf("%lld\n", result);
    }
    return 0;
}
void Input(int arr[], int len)
{
    // 작성하세요!
}
long long SumGCD(int arr[], int len)
{
    // 작성하세요!
}
int GCD(int a, int b)
{
    // 작성하세요!
}