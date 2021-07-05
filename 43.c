#include <stdio.h>
int main()
{
    int ch1, ch2;
    printf("문자 입력 :");
    ch1 = getchar();   
    ch2 = fgetc(stdin);

    if (ch1 >= 'a' && ch1 <= 'z')
    {
        printf("문자 출력 :");
        putchar(ch1 - 32);
        fputc(ch2, stdout);
    } else 
        printf("범위를 벗어난 입력입니다");
        
    return 0;
}