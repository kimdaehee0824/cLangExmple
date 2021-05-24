#include <stdio.h>
void Input(char *);
void Upper(char *);
int main()
{
    char buffer[1025] = {0};
    Input(buffer);
    Upper(buffer);
    printf("%s\n", buffer);
    return 0;
}
void Input(char buffer[])
{
    scanf("%s", buffer);
}
void Upper(char buffer[])
{
    for (int i = 0; i < 1024; i++)
    {
        if (buffer[i] >= 'a' && buffer[i] <= 'z')
            buffer[i] -= 32;
    }
}