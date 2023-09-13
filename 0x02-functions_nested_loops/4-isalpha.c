#include "main.h"
/**
 * _isalpha - checking wether the entry is alphabet
 *
 * @c: is user's entry
 * Return: is 1 if enrty is alphabet 0 if otherwise
 */
int _isalpha(int c)
{
int m;
if (c >= 65 && c <= 122 && c != 91 - 96)
m = 1;
else
m = 0;
return (m);
}
