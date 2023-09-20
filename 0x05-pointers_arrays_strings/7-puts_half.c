#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
int m = 0;
while (*s != '\0')
{
m++;
s++;
}
return (m);
}

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */

void puts_half(char *str)
{
int m;
int k = _strlen(str);
if (k % 2 != 0)
m = (k / 2) + 1;
else
m = (k / 2);

while (m < k)
{
_putchar(*(str + m));
m++;
}
_putchar('\n');
}
