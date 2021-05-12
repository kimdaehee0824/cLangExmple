#include <stdio.h>
// 함수 선언
int NumCompare(int num1, int num2);
int main()
{
    printf("3과 4중에 큰 수는 %d이다\n", NumCompare(3, 4));
    printf("7과 2중에 큰 수는 %d이다\n", NumCompare(7, 2));
    return 0;
}
// 함수 정의
int NumCompare(int num1, int num2)
{

    if (num1 > num2)
        return num1; // return 문이 실행되면 값을 반환하면서 함수를 빠져나간다!
    else
        return num2;
}