#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints passed numbers
 * @separator: char between numbers
 * @n: number of nmber to be printed
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list monzer;
unsigned int i;

if (n > 0)
{
va_start(monzer, n);
for (i = 1; i <= n; i++)
{
printf("%d", va_arg(monzer, int));
if (i !=n && separator != NULL)
printf("%s", separator);
}
va_end(monzer);
}
printf("\n");
}
