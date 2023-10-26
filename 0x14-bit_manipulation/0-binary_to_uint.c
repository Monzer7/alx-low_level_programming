#include "main.h"
/**
 * binary_to_uint - convert binary into int
 * @b: binary to be converted
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
int len = 0;
unsigned int sum = 0;
int power = 1;

if (b == NULL)
	return (0);

/* measure b lenght*/
while (b[len] != '\0')
	len++;
len = len - 1;

/* check if number is binary*/
while (len >= 0)
{
if (b[len] != '0' && b[len] != '1')
	return (0);
if (b[len] == '1')/* if one multiple by power two and sum*/
	sum = sum + power;

power = power * 2;
len--;
}
return (sum);
}
