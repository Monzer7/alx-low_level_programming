#include "main.h"
/**
 * string_toupper - capitalize all letters in string
 *
 * @s:  for manipulate string values
 * Return: string with all letters capitalized
 */
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] > 97 && s[i] < 122)
s[i] = s[i] - 97 + 65;
}
return (s);
}
