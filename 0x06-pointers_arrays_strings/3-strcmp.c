#include "main.h"
/**
 * _strcmp - function compare twp string
 * @s1: one string
 * @s2: one string
 * Return: int that tells num spaces in between
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (*(s1 + i) == *(s2 + i) && *(s1 + i))
i++;
return (*(s1 + i)-*(s2 + i));
}
