#include <stdio.h> // 함수 선언

int Add(int, int);

int main()
{
    int x, y, sum;
    printf("정수 두 개를 입력하세요~!(예 1 2) : ");
    scanf("%d %d", &x, &y);
    sum = Add(x, y); // 함수 호출 
    printf("%d + %d = %d", x, y, sum); return 0;
}

int Add(int n1, int n2)
{
    int n3 = n1 + n2;
    return n3;
}