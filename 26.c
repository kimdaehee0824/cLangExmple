#include <stdio.h>
// 함수 선언
int Add(int num1, int num2); // 매개변수 O, 반환값 O 
void ShowAddResult(int num); // 매개변수 O, 반환값 X
int InputNum();
void HowToUseThisProg();
int main()
{
    int result, num1, num2;
    HowToUseThisProg();
    num1 = InputNum();
    num2 = InputNum();
    result = Add(num1, num2);
    ShowAddResult(result);
    return 0;
}
// 함수 정의
int Add(int num1, int num2)
{
    return num1 + num2;
}
void ShowAddResult(int num)
{
    printf("덧셈결과 출력 : %d\n", num);
}
int InputNum()
{
    int num;
    scanf("%d", &num);
    return num;
}
void HowToUseThisProg()
{
    printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다.\n");
    printf("자! 그럼 두개의 정수를 입력하세요.\n");
}