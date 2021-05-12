#include <stdio.h>
// 함수 선언
int GetMax(int num1, int num2, int num3); // 가장 큰 수 반환하는 함수
int GetMin(int num1, int num2, int num3); // 가장 작은 수 반환하는 함수

int main()
{
    int num1, num2, num3;
    printf("세 개의 정수 입력 : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("가장 큰 수 : %d\n", GetMax(num1, num2, num3));
    printf("가장 작은 수 : %d\n", GetMin(num1, num2, num3));
    return 0;
}

int GetMax(int num1, int num2, int num3)
{
    if (num1 >= num2 && num1 >= num3)
    {
        return num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        return num2;
    }
    else if (num3 >= num1 && num3 >= num2)
    {
        return num3;
    }
    else
    {
        return 0;
    }
    
}
int GetMin(int num1, int num2, int num3)
{
    if (num1 <= num2 && num1 <= num3)
    {
        return num1;
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        return num2;
    }
    else if(num3 <= num1 && num3 <= num2)
    {
        return num3;
    }
    else
    {
        return 0;
    }
}