#include <stdio.h>
int main()
{
    int i, j, arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int len = sizeof(arr) / sizeof(int), tmp;
    int *fptr = arr, *bptr = arr + len - 1;
    for (i = 0; i < len / 2; i++)
    {
        printf("*ftpr :%2d, *bptr :%2d [ ", *fptr, *bptr);
        tmp = *fptr;
        *fptr = *bptr;
        *bptr = tmp;

        fptr++;
        bptr--;
        for (j = 0; j < len; j++)
        {
            printf("%d ", *(arr + j));
        }
        printf("]\n");
    }
    printf("\n");
    for (i = 0; i < len; i++)
    {
        printf("%d ", *(arr + i));
    }
    return 0;
}