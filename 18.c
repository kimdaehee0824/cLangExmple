#include <stdio.h>
int main()
{
    char ch[5000];
    scanf("%s", ch);
    int num = 0;

    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= '0' && ch[i] <= '9')
            num = num + ch[i] - '0'; 
    }

    if (num % 3 == 0)
        printf("1");
    else
        printf("0");

    return 0;
}