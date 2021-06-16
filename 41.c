#include <stdio.h>
typedef enum color
{
    Red,
    Green,
    Blue,
    SIZE
    
} COLOR;

void PrintColor(COLOR cor);
int main()
{
    COLOR cor;
    for (cor = Red; cor < SIZE; cor += 1)
        PrintColor(cor);
    return 0;
}
void PrintColor(COLOR cor)
{
    switch (cor)
    {
    case Red:
        printf("Red 출력\n");
        break;
    case Blue:
        printf("Blue 출력\n");
        break;
    case Green:
        printf("Green 출력\n");
        break;
    }
}