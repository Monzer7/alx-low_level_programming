#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int m;
if (m > 0)
m = n % 10;
else if (m < 0)
m = -n % 10;
_putchar(m + 48);
return (m);
}
