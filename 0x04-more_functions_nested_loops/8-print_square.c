#include "main.h"
/**
 * print_square - prints sqaure
 * @size: is length by user
 */
void print_square(int size)
{
int i = 0, j;
while (i <= size)
{
if (size <= 0)
_putchar('\n');
for (j = 0; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
i++;
}
}
