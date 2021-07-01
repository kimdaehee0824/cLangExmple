#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ReadUserName();

int main()
{
    char *name1 = NULL, *name2 = NULL;
    name1 = ReadUserName();
    printf("name1 : %s\n", name1);
    name2 = ReadUserName();
    printf("name2 : %s\n", name2);
    printf("again name1 : %s\n", name1);
    printf("again name2 : %s\n", name2);
    free(name1);
    free(name2);
    return 0;
}
char *ReadUserName()
{
    char *name = (char *)malloc(sizeof(char) * 30);
    printf("What is your name? ");
    gets(name);
    return name;
}