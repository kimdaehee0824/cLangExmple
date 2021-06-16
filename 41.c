#include <stdio.h>
enum TextAttribute
{
    Bold = 1,
    Underline = 2,
    Italic = 4,
    Strikethrough = 8
};
int main()
{
    // BitFlag 사용
    int textAttrs = 0;
    textAttrs |= Bold;
    textAttrs |= Underline;
    printf("%d\n", textAttrs);
    if (textAttrs & Underline)
        printf("%d\n", Underline);
    return 0;
}