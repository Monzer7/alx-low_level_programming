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
return (l);
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
if (m == NULL)
return (NULL);
k = 0;
while (k <= lenght(str))
{
*(m + k) = *(str + k);
k++;
if (m == NULL)
return (NULL);
}
return (m);
}
