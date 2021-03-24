//codeup 1164
#include <stdio.h>
int main()
{
    int car = 0;
    int x = 0, y = 0, z = 0;    //high
   
    scanf("%d %d %d",&x, &y, &z);

    if (170 >= x || 170 >= y || 170 >= z)
    {
        printf("CRASH");
}

else
{
    printf("PASS");
}
    return 0;
}