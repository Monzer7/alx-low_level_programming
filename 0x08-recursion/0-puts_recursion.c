#include "main.h"
/**
 * _puts_recursion - it prints string followed by new line
 * @s: string to be printed
 * return: always 0
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
_putchar(*s);
s++;
_puts_recursion(s);
}
