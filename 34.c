#include <stdio.h>

void add(int val);
int num;
int main()
{
    printf("num : %d\n", num);
    add(3);
    printf("num : %d\n", num);

    num++; // 전역변수 num의 1 증가 
    printf("num : %d\n", num);
    return 0;
}

void add(int val)
{
    num += val;
}