#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *str_concat - concatenate two strings
 * @s1: string to be added to
 * @s2: string to concatenate ti s1
 * Return: pointer to new string or NULL
 */
char *str_concat(char *s1, char *s2)
{
char *m;
int len1 = 0, len2 = 0, i = 0, j = 0, k = 0, f = 0;

while (*(s1 + i))
{i++, len1++;}
while (*(s2 + j))
{j++, len2++;}
m = malloc(sizeof(char) * (len1 + len2));
if (m == NULL)

return (NULL);
while (k < len1)
{
*(m + k) = *(s1 + k);
k++;
}
while (f < (len1 + len2))
{
*(m + len1 + f) = *(s2 + f);
f++;
}
return (m);
}
