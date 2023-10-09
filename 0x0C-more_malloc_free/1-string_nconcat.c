#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * len - calculate str lenght
 * Return: string lenght 
 */
int len(char *s)
{
int m, l;
for (m = 0; s[m] != '\0'; m++)
{
l = m;
}
return (l);
}
/**
 *  *string_nconcat - function concatenate two strings
 *  @n: number of bytes to be concatenate
 *  Return: pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
int i, j, lenght;
int k = n;
if (k >= len(s2))
{
k = len(s2);
}
if (k < 0)
{
return (NULL);
}
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
lenght = len(s1) + len(s2) + 1;

ptr = malloc(sizeof(*ptr) * lenght);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i <= len(s1); i++)
ptr[i] = s1[i];
for (j = 0; j <= k; j++)
ptr[len(s1) + j] = s2[j];
return (ptr);
}
