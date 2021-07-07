#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str1[20] = "First~";
    char str2[20] = "Second";
    char str3[20] = "123456789";
    char str4[20] = "SimpleNum";
    char *pstr;
    // case 1
        strcat(str1, str2);
        puts(str1);
    // case 2
        strncat(str3, str4, 7);
        puts(str3);
    pstr = (char *)malloc(sizeof(str3) * strlen(str3) + sizeof(str4) * strlen(str4));
    strcpy(pstr, str3);
    strcat(pstr, str4);
    puts(pstr);
    free(pstr);
    return 0;
}