#include "main.h"
/**
 * _strlen - calculate the str length
 * Description: IT counts char on by one
 *
 * @s: is the string pointer
 * Return:  Always int number of char per str
 */
int _strlen(char *s)
{
int m = 0;
while (*s != '\0')
{
m++;
s++;
}
return (m);
}
