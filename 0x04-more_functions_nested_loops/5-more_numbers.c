#include "main.h"
/**
 * more_numbers - prints numbers 10 times
 * Return: no return
 */
void more_numbers(void)
{
int i, m = 0;
while (m >= 0 && m < 10)
{
for (i = 0; i <= 14; i++)
{
if ((i / 10) > 0)
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar('\n');
m++;
}
}
