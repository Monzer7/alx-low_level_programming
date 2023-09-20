#include "main.h"
/**
 * _puts - add new line
 * Description: it adds a new line after a string
 *
 * @str: is var passed ny user
 * Return: always 0
 */
void _puts(char *str)
{
while (*str != '\0')
_putchar(*str++);
_putchar('\n');
return;
}

