#include <stdio.h>
int main()
{
    int nArr[5];
  
    int i = 0;

    printf(" 배열의 요소 5개를 입력하세요.\n");
    for (i = 0; i < 5; i++)
    {
        printf(" nArr1[%d] : ", i);
        scanf("%d", &nArr[i]);
    }
    
    printf("\n배욜을 출력합니다.\n");
    for ( i = 0; i < 5; i++)
    {
        printf("nArr[%d] : %d\n", i, nArr[i]);
    }
    
    return 0;
}