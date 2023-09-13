#include "main.h"
/**
 * print_alphabet_x10 - main function
 *
 * Description: Prints all alphabet in lower case
 * Return: always (0)
 */

void print_alphabet_x10(void)
{

char  m;
int i;
for (i = '0' ; i <= '9' ; i++)
for (m = 97 ; m <= 122 ; m++)
{
_putchar(m);
}
_putchar('\n');
return;
}
