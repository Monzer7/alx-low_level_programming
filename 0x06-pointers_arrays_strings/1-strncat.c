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
 * _strncat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of bytes(chars)
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
int len = 0;
_strlen(dest);
while (dest[i] != '\0')
i++;
while (src[j] != src[n])
{
dest[len + i] = src[j];
i++;
j++;
}
dest[len + i] = '\0';
return (dest);
}
