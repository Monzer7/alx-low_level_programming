#include "main.h"
/**
 *find_prime - test if number is prime
 *@p: test variable
 *Return: 1 if number prime 0 if number is not
 */
int find_prime(int p)
{
if (p == 3)
return (1);
else if (p % 3 == 0 || p % 5 == 0 || p % 7 == 0)
return (0);
else
return (1);
}
/**
 * is_prime_number - to return 1 if n prime
 * @n: number to be checked if prime
 * Return: 1 if number is prime 0 otherwise
 */
int is_prime_number(int n)
{
if (n % 2 == 0 || n < 2)
return (0);
else if (n == 2)
return (1);
else
return (find_prime(n));
}
