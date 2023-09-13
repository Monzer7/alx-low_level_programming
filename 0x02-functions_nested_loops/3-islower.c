#include "main.h"
/**
 * _islower- checking
 * Description:Int C  to check for lower case
 * Return: 1 when lower 0 when upper
 */
int _islower(int c)
{
int m;
if (c >= 97 && c <= 122)
m = 1;
else
m = 0;
return m;
}
