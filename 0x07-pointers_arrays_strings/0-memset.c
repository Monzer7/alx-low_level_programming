#include "main.h"
/**
 * _memset - fill memory with constantn
 * @s: pointer
 * @n: number to be filled with
 * @b: cinstant value
 * Return: memory value
 */
char *_memset(char *s, char b, unsigned int n)
{
int i, k;
k = n;
for (i = 0; i < k; i++)
if (k > 0)
s[i] = b;
return (s);
}
