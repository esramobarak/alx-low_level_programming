#include "main.h"
/**
* print_alphabet - Entry point
* Description: prints the alphabet a-z
* Return: Always 0 (Success)
*/

void print_alphabet(void)


{
char ch = 'a';


while (ch <= 'z')
{
_putchar (ch);
ch++;
}
_putchar ('\n');

}
