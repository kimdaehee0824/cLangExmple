#include <stdio.h>
int main()
{
    int i = 1;
    int j = 1;
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    i = num1, j = num2;

    while (scanf(""))
   {
       if (i % 2 == 1)
       {
           printf("%d ", i);
       }
       i++;
   }
   
    return 0;
}