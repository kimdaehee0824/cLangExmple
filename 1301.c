#pragma  warning(disable : 4996)
// 수행 #9 구조체로 실수 저장 하기
// 학번 : 1301
// 이름 : 김대희
#include <stdio.h>

typedef struct SaveToDouble
{
    int digits[30];
    int decpt;
    int sign;

} SaveToDouble;

SaveToDouble num[10];
void input();
 int main()
{
    input();
    return 0;
}
void input()
{
    int n, i, j, k, cnt, c = 0;
    char arr[30] = {0};
    printf("실수 입력 : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("실수 %d : ", i + 1);
        scanf("%s", arr);

        if (arr[0] == '-')
            num[i].sign = -1;
        else
            num[i].sign = 1;

        if (num[i].sign == 1)
            j = 0;
        else
            j = 1;

        cnt = 0;

        if (arr[j] != '0')
        {

            for (; arr[j] != '\0' && arr[j] != '.'; j++)
            {
                cnt++;
            }
        }
        else
        {
            for (; arr[j] != '\0'; j++)
            {
                if (arr[j] == '.')
                    ;
                else if (arr[j] != '0')
                {
                    for (int l = j, m = 0; arr[l] != '\0'; l++)
                    {
                        num[i].digits[m] = arr[l] - '0';
                        m++;
                    }
                    break;
                }
                else
                {
                    cnt--;
                }
            }
        }
        num[i].decpt = cnt;
        if (num[i].sign == 1)
            j = 0;
        else
            j = 1;
        if (num[i].digits[0] == 0)
        {
            for (k = 0; arr[j] != '\0'; j++)
            {
                if (arr[j] != '.')
                {
                    num[i].digits[k] = arr[j] - '0';
                    k++;
                }
            }
        }
    }
    printf("\n실수 입력 개수\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%d 번째 실수 -------------------\n", i + 1);
        for (k = 0; k < 30; k++)
            printf("%d", num[i].digits[k]);
        printf("\ndecpt : %d\n", num[i].decpt);
        printf("sign : %d\n", num[i].sign);
    }
}