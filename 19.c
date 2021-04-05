#include <stdio.h>
int main()
{
    int nArr1[5] = {1, 2, 3, 4, 5};
    int nArr2[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int nArr3[10] = {1, 3};
    int ar1Len, ar2Len, ar3Len, i;

    printf("배열 nArr1의 크기 : %d\n", sizeof(nArr1));
    printf("배열 nArr2의 크기 : %d\n", sizeof(nArr2));
    printf("배열 nArr3의 크기 : %d\n", sizeof(nArr3));
     
    ar1Len = sizeof(nArr1) / sizeof(int);
    ar2Len = sizeof(nArr2) / sizeof(int);
    ar3Len = sizeof(nArr3) / sizeof(int);

    for (i = 0; i < ar1Len; i++)
    {
        printf("%d ", nArr1[i]);
    }
    printf("\n");

    for (i = 0; i < ar2Len; i++)
    {
        printf("%d ", nArr2[i]);
    }
    printf("\n");

    for (i = 0; i < ar3Len; i++)
    {
        printf("%d ", nArr3[i]);
    }
    printf("\n");
    return 0;
}