#include "main.h"
/**
 * jack_bauer - print time
 * Description: prints all minutes all day
 * Return: alwwayes return 0
 */
void jack_bauer(void)
{
int a;
int b;
int c;
int d;
while (a <= 2)
{
_putchar(a);
while (b <= 3)
{
_putchar(b);
_putchar(':');

while (c <= 5)
{
_putchar(c);

while (d <= 9)
{
_putchar(d);
d++;
_putchar('\n');
}
c++;
}
b++;
}
a++;
}
return;
}
