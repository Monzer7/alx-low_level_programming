#include "main.h"
/**
 * _strspn - git sthe length of a substring
 * prefix
 * @s: source string
 * @accept: string to be measured
 * Return: the lenght of subarray
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0, j, m = 0;
while (s[i] != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
if (s[i] == accept[j])
{
m++;
break;
}
else if (accept[j + 1] == '\0' && s[i] != '\0')
{
return (m);
}
i++;
}
return (m);
}
