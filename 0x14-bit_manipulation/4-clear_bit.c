#include "main.h"

/**
 * clear_bit - clear bit to 0 at given index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int maxlen;
	unsigned long int bit = 1;

	maxlen = (sizeof(unsigned long int) * 8);
	if (index > maxlen)
		return (-1);

	bit = ~(bit << index);
	*n = (*n & bit);

	return (1);
}
