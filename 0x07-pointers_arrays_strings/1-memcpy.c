#include "main.h"
/**
 * _memcpy - copy n bytes of memory from source to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i, k;
k = n;
for (i = 0; i < k; i++)
if (k > 0)
dest[i] = src[i];
return (dest);
}
