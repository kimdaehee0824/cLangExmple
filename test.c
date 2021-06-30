#include <stdio.h>
int main()
{
    const char buf[] = "abcdefghi"; // 상수형 문자배열 선언
    const char *p = buf;ㅁ
    // buf[0] = '*'; 배열접근으로 변경 불가 
     *p = '*'; // 포인터 변수로 접근해서 수정가능 
    printf("%s", buf);
    return 0;
}