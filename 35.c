#include <stdio.h>
void PrintList(int *pList, int Len);
void AddList(int *pList, int Len, int add);
int main()
{

        int arr[3] = {1, 2, 3};

        AddList(arr, sizeof(arr) / sizeof(arr[0]), 1);
        PrintList(arr, sizeof(arr) / sizeof(arr[0]));
        AddList(arr, sizeof(arr) / sizeof(*arr), 2);
        PrintList(arr, sizeof(arr) / sizeof(*arr));
        AddList(arr, sizeof(arr) / sizeof(int), 3);
        PrintList(arr, sizeof(arr) / sizeof(int));

        return 0;
}
void AddList(int pList[], int Len, int add)
{
        int i;
        for (i = 0; i < Len; i++)
                pList[i] += add;
}
void PrintList(int pList[], int Len)
{
        int i;
        printf(" PrintList()\n");
        for (i = 0; i < Len; i++)
                printf(" %d", pList[i]);
        printf("\n");
}