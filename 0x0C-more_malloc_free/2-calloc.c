#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocate memory and set all values to 0
 * @nmemb: number of memory blocks
 * @size: size of memory block
 * Return: poiter to the allocate mem or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i, j;
j = nmemb;
if (size == 0 || j == 0)
return (NULL);

ptr = malloc(size * j);
if (ptr == NULL)
return (NULL);

for (i = 0; i < (size * j); i++)
*((char *)ptr + i) = 0;

return (ptr);
}
