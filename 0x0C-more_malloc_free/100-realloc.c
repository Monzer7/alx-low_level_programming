#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocate mem using mem
 * @ptr: pointer to be changed
 * @old_size: size to be changed
 * @new_size: the new size
 * Return: pointer to new size or NULL in fail
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p;
unsigned int i;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
p = malloc(new_size);
if (p == NULL)
return (NULL);
else
return (p);
}

p = malloc(new_size);
if (p == NULL)
return (NULL);

for (i = 0; i < new_size; i++)
*((char *)p + i) = *((char *)ptr + i);
free(ptr);

return (p);
}
