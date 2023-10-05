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
int k, i, lenght1 = 0, lenght2 = 0;
char *mem;
while (*(s1 + k))
{
lenght1++;
k++;
}
while (*(s2 + i))
{
lenght2++;
i++;
}
lenght2++;
mem = malloc(sizeof(char) * (lenght1 + lenght2));
while (i < lenght1)
{
*(mem + i) = *(s1 + i);
}
return (mem);
}
