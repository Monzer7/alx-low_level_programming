#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: charcters to be checked
 * Return: 1 for digit and 0 for non
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
