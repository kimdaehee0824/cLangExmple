#pragma warning(disable : 4996)
// 수행 #9 구조체로 실수 저장 하기
// 학번 : 1301
// 이름 : 김대희
#include <stdio.h>
// 구조체 선언 부분
#pragma warning(disable : 4996)
#include <stdio.h>
typedef struct save
{
    int digits[30] = {0};
    int decpt;
    int sign;
} save;
typedef struct string
{
    char a[35];
} string;
save arr[10];
string num[10];
void tlftn();
int main()
{
    tlftn();
    return 0;
}
void tlftn()
{
    int n, i, j, k, l;
    printf("실수 입력 개수 : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("실수 %d : ", i + 1);
        scanf("%s", num[i].a);
    }
    for (i = 0; i < n; i++)
    {
        int zero = 0;
        if (num[i].a[0] == '-')
        {
            arr[i].sign = -1;
        }
        else
        {
            arr[i].sign = 1;
        }
        if (num[i].a[0] == '-' && num[i].a[1] == '0')
        {
            for (k = 0; (num[i].a[k] == '0' || num[i].a[k] == '.') || (num[i].a[k] == '-'); k++)
            {
                if (num[i].a[k] == '-')
                    arr[i].decpt++;
                if (num[i].a[k] == '.')
                    arr[i].decpt++;
                arr[i].decpt--;
            }
            for (j = k; num[i].a[j] != '\0'; j++)
            {
                if (num[i].a[j] == '.')
                {
                    j++;
                    continue;
                }
                arr[i].digits[zero] = num[i].a[j] - 48;
                zero++;
            }
        }
        else if (num[i].a[0] == '0' || (num[i].a[1] == '0' && num[i].a[0] == '-'))
        {
            for (k = 0; num[i].a[k] == '0' || num[i].a[k] == '.'; k++)
            {

                if (num[i].a[k] == '.')
                    arr[i].decpt++;
                arr[i].decpt--;
            }
            for (j = k; num[i].a[j] != '\0'; j++)
            {
                if (num[i].a[j] == '.')
                {
                    j++;
                    continue;
                }
                arr[i].digits[zero] = num[i].a[j] - 48;
                zero++;
            }
        }
        else
        {
            int zero = 0;
            for (j = 0; num[i].a[j] != '\0'; j++)
            {
                if (num[i].a[j] == '-')
                    j++;
                if (num[i].a[j] == '.')
                {
                    arr[i].decpt = j;
                    zero - 1;
                    continue;
                }
                arr[i].digits[zero] = num[i].a[j] - 48;
                zero++;
            }
            if (num[i].a[0] == '-')
                arr[i].decpt--;
        }
    }
    printf("\n실수 출력\n\n");
    for (i = 0; i < n; i++)
    {
        printf("%d 번째 실수--------------------------------------\n", i + 1);
        printf("digits : ");
        for (j = 0; j < 30; j++)
        {
            printf("%d", arr[i].digits[j]);
        }
        printf("\n");
        printf(" decpt : %d\n", arr[i].decpt);
        printf("  sign : %d\n", arr[i].sign);
        printf("\n");
    }
}