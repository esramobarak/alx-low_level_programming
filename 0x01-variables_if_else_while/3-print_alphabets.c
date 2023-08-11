#include <stdio.h>
#include <ctype.h>
int main(void)
{
char ch;
char space = '\n';
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(tolower(ch));
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}
putchar(space);

return (0);
}
