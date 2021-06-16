#include <stdio.h>
typedef union rdbuf
{
    int iBuf[2];
    char str[8];
} RDbuf;
int main()
{
    RDbuf buf = {0};
    buf.iBuf[0] = 1819043144;
    buf.iBuf[1] = 6184559;
    printf("%s\n", buf.str);
    /*  48 65 6c 6c  Hell   1819043144
    6f 5e 5e 00  o^^.   6184559     */
    return 0;
}
