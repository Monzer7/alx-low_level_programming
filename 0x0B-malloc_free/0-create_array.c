#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *create_array - create an aray intliazied
 * @size:the size of the array
 * @c: the value of array elemnts
 * Return: a pointer to an array of chars or null
 */
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *m;
m = malloc(sizeof(char) * size);
if (size == 0)
return (NULL);
while (i < size)
{
*(m + i) = c;
i++;
}
return (m);
}
