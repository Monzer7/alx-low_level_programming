#include "main.h"
#include <stdio.h>
/**
 * rot13 - ciphering technique
 * @s:to maniplute strings
 * Return: ciphered string
 */
char *rot13(char *s)
{
int i = 0;
while (s[i] != '\0')
{
for (i = 0; i >= 'a' && i <= 'z'; i++)
if (i <= 'm')
s[i] = s[i + 13];
else if (i >= 'n')
s[i] = s[i - 13];
i++;
}
return (s);
}
