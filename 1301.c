// 수행 #5 문자열 길이 만들기 함수구현
// 학번 : 1301
// 이름 : 김대희
#pragma warning(disable : 4996)
#include <stdio.h>
// 함수 선언 부분
int GetLength(char *myStr);
int main()
{
    char buf[1000] = {0};
    printf("문자열 입력 : ");
    gets(buf);                      // 임의의 문자열을 입력
    int length = GetLength(buf);    // 함수 호출
    printf("\n%s ", buf);
    printf("문자열 길이는 %d 입니다.\n", length);
    return 0;
}
// 함수 정의부분
int GetLength(char *myStr)
{
    int count=0;
    for (int i = 0; i < 1000; i++)
    {
        if (myStr[i] == '\0')
        {
            break;
        }
        else
        {
            count++;
        }
        
    }
    return count;
}
