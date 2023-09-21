#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
int len = 0;
_strlen(dest);

while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{
dest[len + i] = src[j];
i++;
j++;
}
dest[len + i] = '\0';
return (dest);
}
