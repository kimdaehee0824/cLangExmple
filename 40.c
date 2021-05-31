#include <stdio.h>
typedef struct Employee
{
    char name[10];
    char userNumber;
    int cost;
} Employee;

int main()
{
    // struct Person 구조체 변수 person 선언
    Employee person;
    // 멤버 입력받기
    printf("이름 : ");
    scanf("%s", person.name);
    printf("주민번호 : ");
    scanf("%s", &person.userNumber);
    printf(" : ");
    scanf("%d", &person.cost);
    
    printf("\n데이터 출력\n");
    printf("person.height : %.1lf\n", person.height);
    printf("person.weight : %.1lf\n", person.weight);
    printf("person.name : %s\n", person.name);
    printf("person.grade : %d\n", person.grade);

    return 0;
}