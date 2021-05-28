#include <stdio.h>
#include <string.h>
struct Person // struct Person 구조체 선언
{
    double height;
    double weight;
    char name[10];
    short grade;
};

int main()
{
    // struct Person 구조체 변수 person 선언
    struct Person person;
    // 구조체 멤버 접근 및 값 채우기
    person.height = 174.2;
    person.weight = 67.8;
    person.grade = 1;
    strcpy(person.name, "홍길동");

    // 구조체 멤버 접근 및 출력

    printf("person.height : %.1lf\n", person.height);
    printf("person.weight : %.1lf\n", person.weight);
    printf("person.name : %s\n", person.name);
    printf("person.grade : %d\n", person.grade);
    
    return 0;
}