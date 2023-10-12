#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings passed
 * @separator: what separates the string
 * @n: number of strings passed
 * return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list monzer;
unsigned int i;
if (n != 0)
{
va_start(monzer, int);
for (i = 0; i < n; i++)
{
if (*va_arg(monzer, int) != NULL)
printf("%s", va_arg(monzer, int));
else
printf("(nil)");

if (separator != NULL)
printf("%s", separator);
}
va_end(monzer);
}
printf("\n");
}
