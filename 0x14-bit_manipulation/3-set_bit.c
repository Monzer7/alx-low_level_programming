#include "main.h"
/**
 * set_bit - set to 1 at giben index
 * @n: adress of number
 * @index:  the location of bit
 * Return: on succcess 1 on failre -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int maxlen;
unsigned long int bit = 1;

maxlen = ((sizeof(unsigned long int)) * 8);
if (index > maxlen)
	return (-1);

*n = (*n) | bit;
	return (1);
}
