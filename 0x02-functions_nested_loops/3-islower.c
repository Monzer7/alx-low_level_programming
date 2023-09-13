#include "main.h"
/**
 * _islower(int c)- checking
 *
 * @c: the character to check
 * Return: 1 when lower 0 when upper
 */
int _islower(int c)
{
int m;
if (c >= 97 && c <= 122)
m = 1;
else
m = 0;
return (m);
}
