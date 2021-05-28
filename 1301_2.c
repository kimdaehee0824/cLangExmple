#pragma warning(disable : 4996)
// 수행 #6 자연수 A이상 B이하 모든 소수 구하기 함수 구현
// 학번 : 1301
// 이름 : 김대희
#include <stdio.h>
// 함수 선언 부분
void PrintPrimeNumber(int, int);
int main()
{
    int A, B;
    printf(" 자연수 두 개 입력 : ");
    scanf("%d %d", &A, &B);
    printf(" 소수 찾기 결과\n");
    PrintPrimeNumber(A, B);
    return 0;
}
// 함수 정의부분
void PrintPrimeNumber(int A, int B)
{
    int i,j, num ;
    for ( i = A; i <= B; i++)
    {
        num = 0;
        if (i ==1)
            continue;
        
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
                num++;
        }

        if (num == 0)
            printf("%d ", i);
    }
    
}