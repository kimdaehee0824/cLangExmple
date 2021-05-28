#include <stdio.h>
typedef struct Person_
{
    double height;
    double weight;
    char name[10];

    short grade;
} Person;
int main()
{
    // struct Person 구조체 변수 person 선언
    Person person;
    // 멤버 입력받기
    printf("이름 :");
    scanf("%s", person.name);
    printf("키 :");
    scanf("%lf", &person.height);
    printf("몸무게 :");
    scanf("%lf", &person.weight);
    printf("등급 :");
    scanf("%hd", &person.grade);
    // 입력받은 구조체 데이터 출력
    printf("\n데이터 출력\n");
    printf("키 : %.1lf\n", person.height);
    printf("몸무게 : %.1lf\n", person.weight);
    printf("이름 : %s\n", person.name);
    printf("등급 : %d\n", person.grade);
    return 0;
}