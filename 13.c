#include <stdio.h>
int main()
{
    int i, num = 0;
 
    while (1)
    {
        printf("자연수를 입력하세요(0은 나가기");
        scanf("%d", &num);

        if (num > 0)
        {
            printf("자연수가 아닙니다");
            continue;
            else if (num == 0)
            {
                break;
            }
        }
       if (num % 2 == 0)
        {
            printf("%d는 짝수", num);

            else if (num % 2 == 1)
            {
                printf("%d는 홀수", num);
            }
        }
    }

    printf("종료합니다!!");
    
    return 0;
}