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
char *s;
if (n > 0)
{
va_start(monzer, n);
for (i = 1; i <= n; i++)
{
s = va_arg(monzer, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);

if (separator != NULL && i != n)
printf("%s", separator);
}
va_end(monzer);
}
printf("\n");
}
