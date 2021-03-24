#include <stdio.h>
int main() 
{
    char n1, n2;
    int num1, num2;
    int i = 1;
    int j = 1;

    scanf("%c %c", &n1, &n2);

    i = n1, j = n2;

    while (i <= j)
    {
        printf("%c", i);
        i++;
    }

    return 0;
    
}