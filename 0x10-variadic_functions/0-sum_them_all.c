#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all parameters passed to it
 * @n: intergetrs to be summed
 * Return: the sum of all numbers
 */
int sum_them_all(const unsigned int n, ...)
{
va_list monzer;

unsigned int sum = 0;
unsigned int i;

if (n == 0)
return (0);

va_start(monzer, n);

for (i = 0; i < n; i++)
{
sum = sum + va_arg(monzer, int);
}
va_end(monzer);
return (sum);
}
