//코드업 1212
#include <stdio.h>
int main()
{
    long int a, b, c = 0;
    long int A, B, C;   //ff는 가장 큰 수

    scanf("%ld %ld %ld", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            A = a, B = b, C = c;
        }
    }

    else if (b > a)
    {
        if (b > c)
        {
            A = b, b = a, C = c;
        }
    }  

  else if (c > a)
    {
        if (c > b)
        {
            A = c, B = a, C = b;
        }
    }        

  
    if (A < B + C)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    
    return 0;
}