#include <stdio.h>
void Trans(char res[], int N, int B);
int main()
{
    char res[35] = {0};
    int num, B;
    scanf("%d %d", &num, &B);
    Trans(res, num, B);
    printf("%s\n", res);
    return 0;
}
void Trans(char res[], int N, int B)
{
    int ahrt = N;
    int tmp, i;
    for (i = 0; ;i++)
    {
        tmp = ahrt % B;
        if(tmp <= 9 && tmp >=0)
            res[i] = tmp + '0';
        else
        {
            res[i] = tmp-10 + 'A';
        }
        
        ahrt = ahrt / B;
        if(ahrt == 0) break;
    }
    
    int len = i-1;
    for(int j = 0; j <= len / 2; j++)
    {
        tmp = res[j];
        res[j] = res[len-j];
        res[len-j] = tmp;
    }
   
}