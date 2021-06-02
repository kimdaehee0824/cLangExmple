#include <stdio.h>
typedef struct point
{
    int xpos;
    int ypos;

} Point;

typedef struct Rectangle
{
    Point p1;
    Point p2;

} Rectangle;

void ShowRecArea(Rectangle rect);
void ShowRecPos(Rectangle rect);
int main()
{
    Rectangle rec1 = {{1, 1}, {4, 4}};
    Rectangle rec2 = {{0, 0}, {7, 5}};
    ShowRecArea(rec1);
    ShowRecPos(rec1);
    ShowRecArea(rec2);
    ShowRecPos(rec2);
}
void ShowRecArea(Rectangle rect)
{
    int sum;
    sum = (rect.p2.xpos - rect.p1.xpos) * (rect.p2.ypos - rect.p1.ypos);
    printf("넓이 : %d\n", sum);
}
void ShowRecPos(Rectangle rect)
{
    printf("좌 상단 : [%d %d]\n", rect.p1.xpos, rect.p1.ypos);
    printf("좌 하단 : [%d %d]\n", rect.p1.xpos, rect.p2.ypos);
    printf("우 상단 : [%d %d]\n", rect.p2.xpos, rect.p1.ypos);
    printf("좌 히단 : [%d %d]\n", rect.p2.xpos, rect.p2.ypos);
}