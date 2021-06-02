#pragma warning(disable : 4996)
// 수행 #7 회원 정보를 입력받고 출력하기
// 학번 : 1301
// 이름 : 김대희
#include <stdio.h>
// 구조체 선언 부분
typedef struct MemberInformation
{
    char name[30];
    int age;

} MemberInformation;
// 함수 선언 부분
int count;
MemberInformation people[100];
void input();
void output();

// main 함수
int main()
{
    input();
    output();
    return 0;
}
void input()
{
    printf("입력 회원 수 : ");
    scanf("%d", &count);
    printf("%d명 회원정보 입력\n", count);

    for (int i = 0; i < count; i++)
    {
        printf("%d : ", i + 1);
        scanf("%d %s", &people[i].age, people[i].name);
    }
}
void output()
{
    printf("%d명 회원정보 출력\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("%d %s\n", people[i].age, people[i].name);
    }
    
}
