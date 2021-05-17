#include <stdio.h>
int SimpleFuncOne(int);
int SimpleFuncTwo(int, int);
int main()
{
    int num1 = 10; // 이후부터 main의 num1 유효
    int num2 = 12; // 이후부터 main의 num2 유효
    SimpleFuncOne(num1);
    SimpleFuncTwo(num1, num2);
    printf("main num1 : %d, num2 : %d\n", num1, num2);
    return 0; // main의 num이 유효한 마지막 문장

}

int SimpleFuncOne(int num)
{
    num++;
    
    printf("SimpleFuncOne num : %d\n", num);
    return 0;
}
int SimpleFuncTwo(int num1, int num2)
{

    int num3 = 30;
    num1++, num2--;

    {
        // 함수내에서 중괄호로 새로운 영역을 생성
        int num1 = 40;
        int num2 = 50;
        printf("num1 : %d\n", num1);
        printf("num2 : %d\n", num2);
        printf("num3 : %d\n", num3);
    }

    printf("SimpleFuncTwo num1 : %d, num2 : %d, num3 : %d\n", num1, num2, num3);
    return 0;
}