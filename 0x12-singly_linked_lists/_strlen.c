#include "lists.h"
/**
 * _strlen - measure string lenght
 * @s: string to be cacultaed
 * Return: string lenght
 */
int _strlen(const char *s)
{
int len;
for (len = 0, s[len] != '\0', len++)
;
return (len);
}
