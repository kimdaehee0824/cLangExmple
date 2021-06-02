#pragma warning(disable : 4996)
// 수행 #8 좌표 순서대로 출력하기
// 학번 : 1301
// 이름 : 김대희
#include <stdio.h>
// 구조체 선언 부분
typedef struct Coordinates
{
    int xpos;
    int ypos;

} Coordinates;

// 함수 선언 부분
Coordinates p[3];
void input();
void sawp(int *x, int *y)
{
    int tmp = 0;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

// main 함수
int main()
{
    input();
    return 0;
}
// 함수 정의부분
void input()
{
    printf("입력\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &p[i].xpos, &p[i].ypos);
    }

    // p[0] p[1]
    if ((p[0].xpos > p[1].xpos) || (p[0].xpos == p[1].xpos && p[0].ypos > p[1].ypos))
    {
        sawp(&p[0].xpos, &p[1].xpos);
        sawp(&p[0].ypos, &p[1].ypos);
    }
    // p[0] p[2]
    if ((p[0].xpos > p[2].xpos) || (p[0].xpos == p[2].xpos && p[0].ypos > p[2].ypos))
    {
        sawp(&p[0].ypos, &p[2].ypos);
        sawp(&p[0].xpos, &p[2].xpos);
    }
    // p[1] p[2]
    if ((p[1].xpos > p[2].xpos) || (p[1].xpos == p[2].xpos && p[1].ypos > p[2].ypos))
    {
        sawp(&p[1].xpos, &p[2].xpos);
        sawp(&p[1].ypos, &p[2].ypos);
    }

    printf("출력\n");
    for (int i = 0; i < 3; i++)
    {
        printf("[%d, %d]\n", p[i].xpos, p[i].ypos);
    }
}