#include <stdio.h>
int addToTotal(int num);
int main()
{
    int num, i;
    for (i = 0; i < 3; i++)
    {
        printf("입력%d : ", i + 1);
        scanf("%d", &num);
        printf("\t누적 : %d\n", addToTotal(num));
    }
}
int addToTotal(int num)
{₩1 ㅂㅃㅂ
    static int total = 0;
    total += num;
    return total;
}