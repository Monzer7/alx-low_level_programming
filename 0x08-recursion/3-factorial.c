#include "main.h"
/**
 * factorial - calculate factorial of given num
 *@n: number to be caluclated
 * Return: the resul of factorial
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));
}
