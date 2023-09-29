#include "main.h"
/**
 * find_root - to find the root of n
 * @n: number to find root of
 *@root: root of n
 * Return: result of the root
 */

int find_root(int root, int n)
{
if (root * root > n)
return (-1);
else if (root * root == n)
{
return (root);
}
return (find_root(1 + root, n));
}
/**
 * _sqrt_recursion - to find root n
 * @n: number to find its root
 * Return: root of n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (find_root(0, n));
}
