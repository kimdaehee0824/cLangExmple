#include <stdio.h>
void PrintList(int *pList, int nSize);
int main()
{
    // 배열을 지역변수로 선언했기 때문에
    // 다른 함수에서는 직접 접근할 수 없다.
    int aList1[5] = {3, 2, 4, 5, 1};
    int aList2[10] = {8, 5, 6, 9, 1, 4, 2, 3, 7, 0};
    PrintList(aList1, 5);
    PrintList(aList2, 10);
    return 0;
}
// 배열 실인수는 '포인터' 매개변수로 받는다
// 포인터에는 요소의 개수 정보가 없으므로 int 매개변수가 더 필요하다.
// 만일 출력해야할 정수의a37.c 개수가 달라져도 이 함수의 코드는 변하지 않는다.
void PrintList(int *pList, int nSize)
{
    int i;
    printf(" PrintList()\n");
    for (i = 0; i < nSize; i++)
        printf(" %d", pList[i]);
    printf("\n");
}