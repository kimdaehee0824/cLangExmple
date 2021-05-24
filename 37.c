#include <stdio.h>
// 아래 프로그램은 치명적인 버그가 존재함. 
void GetName(char* pszName);
int main()
{
    char szName[10] = {0};
    GetName(szName);
    printf(" 당신의 이름은 %s입니다.\n", szName);
    return 0;
}
void GetName(char *pszName)
{
    printf(" 이름을 입력하세요 : ");
    scanf("%s", pszName);
}