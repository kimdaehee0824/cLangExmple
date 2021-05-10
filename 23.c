#include <stdio.h>
int main()
{
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);
   int sum = (a / (c - b)) + 1;

   if (b >= c)
   {
       printf("-1");
   } else
   {
       printf("%d", sum);
   }
   
   return 0;
}