#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * len - calculate str lenght
 * @s:string to be measured
 * Return: string lenght
 */
/*int len(char *s)
{
int m, l;
for (m = 0; s[m] != '\0'; m++)
{
l = m;
}
return (l);
}*/
/**
 *  *string_nconcat - function concatenate two strings
 *  @s1: string to added to
 *  @s2: string to be added
 *  @n: number of bytes to be concatenate
 *  Return: pointer to allocated memory
 */
/**char *string_nconcat(char *s1, char *s2, unsigned int n)
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
lenght = len(s1) + len(s2);

ptr = malloc(sizeof(*ptr) * lenght);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
ptr[i] = s1[i];
for (j = 0; j <= k; j++)
{
ptr[i + j] = s2[j];
ptr[i + j + 1] = '\0';
}
return (ptr);
}*/
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, i, j;

	num = n;

	if (s1 == NULL) /* account for NULL strings */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /* account for negative n bytes */
		return (NULL);
	if (num >= _strlen(s2)) /* account for n too big */
		num = _strlen(s2);

	len = _strlen(s1) + num + 1; /* +1 to account for null pointer */

	ptr = malloc(sizeof(*ptr) * len); /* malloc and check for error */
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++) /* concat */
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);}
