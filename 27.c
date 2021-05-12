#include <stdio.h>
int main()
{
    
    int n[15][15] = {};
    int testCase, a, b;
    scanf("%d", &testCase);
    for (int i = 1; i <= 15; i++)
    {
        
    }
    
    for (int i = 0; i <= testCase; i++)
    {
        int a, b;
        scanf("%d\n%d", &a, &b)
        for (int j = 0; j < a; j++)
        {
            /* code */
        }
        
       
    }
    return 0;
}
void AreaToZero()
{
    for (int i = 1; i < 15; i++)
    {
        
        for (int j = 1; j < 15; j++)
        {
            n[0][j] = j;
            for (int k = 1; k < 15; k++)
            {
                n[i][j] = n[i - 1][k -1]  
            }
            
            
        }
        
    }
    
}
