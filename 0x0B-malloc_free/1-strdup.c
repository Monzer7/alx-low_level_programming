#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * lenght - measure the lenght of the string
 * @str: string to be measured
 * Return: the lenght of the string
 */
int lenght(char *str)
{
int i, l;
for (i = 0; str[i] != '\0'; i++)
l = i;
return (l + 1);
}


/**
 * *_strdup - create a pointer to string with conataint
 * of another string
 * @str: string to be copied
 * Return: a pointer to the string or NULL
 */
char *_strdup(char *str)
{
char *m;
int k;
if (str == NULL)
return (NULL);
m = malloc(sizeof(char) * lenght(str));
k = 0;
if (lenght(str) == 0)
return (NULL);
while (str[k] != '\0')
{
m[k] = str[k];
k++;
}
return (m);
}
