#include "main.h"
/**
 *get_bit - find bit at given index
 *@n: number to be searchrd
 *@index: number's location
 *Return: in success 1 or 0 in failure -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit;
unsigned int maxlen;
maxlen = (sizeof(unsigned long int) * 8);
if (index > maxlen)
	return (-1);
bit = ((n >> index) & 1);
return (bit);
}
