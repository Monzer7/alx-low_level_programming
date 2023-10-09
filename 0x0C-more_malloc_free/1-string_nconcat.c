#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * len - calculate str lenght
 * @s:string to be measured
 * Return: string lenght
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 *  *string_nconcat - function concatenate two strings
 *  @s1: string to added to
 *  @s2: string to be added
 *  @n: number of bytes to be concatenate
 *  Return: pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
int i, j, lenght;
int k = n;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

if (k < 0)
return (NULL);

if (k >= _strlen(s2))
k = _strlen(s2);

lenght = _strlen(s1) + k;

ptr = malloc(sizeof(*ptr) * lenght);

if (ptr == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
ptr[i] = s1[i];

for (j = 0; j <= k; j++)
{
ptr[i + j] = s2[j];

}
ptr[i + j + 1] = '\0';
return (ptr);
}

/**char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, i, j;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) 
		return (NULL);
	if (num >= _strlen(s2)) 
		num = _strlen(s2);

	len = _strlen(s1) + num + 1; 

	ptr = malloc(sizeof(*ptr) * len); 
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++) 
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);}*/
