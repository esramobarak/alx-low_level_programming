#include "main.h"
/**
* print alphabets 10 times in lowercase x10
* 
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)


{
int i = 0;


while (i <= 9)
{
char ch = 'a';
while (ch <= 'z')
{
_putchar (ch);
ch++;
}
_putchar ('\n');
i++;
}

}
