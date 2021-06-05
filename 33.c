#pragma warning(disable : 4996)
#include <stdio.h>
typedef struct SaveToDouble
{
    int digits[30];
    int decpt;
    int sign;

} SaveToDouble;

SaveToDouble arr[10];

int n;
void input(int n);
void output();

int main()
{
    printf("실수 입력 개수 : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        input(i);

    output();
    return 0;
}
void input(int n)
{
    char num[35] = {0};
    int j;
    printf("실수 %d : ", i + 1);
    scanf("%s", num);

    if (num[0] == '-')
        arr[n].sign = -1, j = 1;
    else
        arr[n].sign = 1, j = 0;

    if (num[j] == '0')
        for (; num[j] == '0' || num[j] == '.'; j++)
            ;
}
void output()
{

    printf("\n실수 출력\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d 번째 실수--------------------------------------\n", i + 1);
        printf("digits : ");
        for (int j = 0; j < 30; j++)
            printf("%d", arr[i].digits[j]);
        printf("\n");
        printf(" decpt : %d\n", arr[i].decpt);
        printf("  sign : %d\n", arr[i].sign);
        printf("\n");
    }
}
