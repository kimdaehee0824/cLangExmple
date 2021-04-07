#include <stdio.h>
int main()
{
    char str[18] = "Nice to meet you!";
    printf("배열 str의 크기 : %d\n", sizeof(str));
    printf("NULL 문자 문자형 출력 : %c\n", str[17]);
    printf("NULL 문자 정수형 출력 : %d\n", str[17]);
    str[16] = '?';
    printf("문자열 출력 : %s\n", str);
    printf("\n");
    
    char nu = '\0';
    char sp = ' ';
    printf("%d %d\n", nu, sp);

    return 0;
}