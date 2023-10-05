#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * lenght - measures string lenght
 * @s: string to measured
 * Return: the lenght of the string
 */
int lenght(char *s)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
j = i;
return (j + 1);
}
/**
 * *str_concat - concatenate two strings
 * @s1: string to be added to
 * @s2: string to concatenate ti s1
 * Return: pointer to new string or NULL
 */
char *str_concat(char *s1, char *s2)
{
int k;
char *mem;
for (k = 0; s2[k] != '\0'; k++)
{
s1[k + lenght(s1)] = s2[k];
}
if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
mem = malloc(sizeof(char) * lenght(s1));
return (mem);
}
