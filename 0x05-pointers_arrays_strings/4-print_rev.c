#include "main.h"
/**
 * print_rev - revers string
 * Description: revers all string
 *
 * @s: pointers value
 * Returns: always 0
 */
void print_rev(char *s)
{
int m = 0;
int k;
while (*s != '\0')
{
m++;
++s;
}
s--;
for (k = m; k > 0; k++)
{
_putchar(*s);
}
_putchar('\n');
return;
}
