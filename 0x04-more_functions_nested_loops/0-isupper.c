#include "main.h"
/**
 * _isupper - check id enyrt upper
 * @c: checking char
 * Return: 1 for upper and 0 for lower
 */
int _isupper(int c)
{
if (c > 'A' && c < 'Z')
return (1);
else
return (0);
}
