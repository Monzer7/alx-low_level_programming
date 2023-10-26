#include "main.h"
/**
 * print_binary - prints number in binary
 * @n: number to be printed
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = n;
	int len = 0;
/*binary number lenght*/
	while (m > 0)
	{
	len++;
	m = m >> 1;
	}
	len = len - 1;
/*prints 1s and 0s*/
	while (len >= 0)
	{
		if ((n >> len) & 1)
			_putchar('1');
		else
			_putchar('0);
	len--;
}
}
