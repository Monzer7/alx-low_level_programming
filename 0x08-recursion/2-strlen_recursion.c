#include "main.h"
/**
 * _strlen_recursion - it calculate the lemght of string
 * @s: string to be measured
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
s++;

return (1 + _strlen_recursion(s));
}
