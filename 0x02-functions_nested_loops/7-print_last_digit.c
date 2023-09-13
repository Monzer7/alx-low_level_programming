#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int m = 0;
if (n > 0)
m = n % 10;
else if (n < 0)
m = -n % 10;
else
_putchar(m + '0');
return (m);
}
