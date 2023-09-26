#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - search for first occuarance
 * @s: string to be search
 * @accept: serarching string
 * Return: return address of first occurance
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, m;
while (s[i] != '\0')
{
for (m = 0; accept[m] != '\0'; m++)
{
if (s[i] == accept[m])
{
s = &s[i];
return (s);
}
}
i++;
}
return (NULL);
}
