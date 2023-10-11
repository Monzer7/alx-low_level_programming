#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name tobe printed
 * @f: function to be called back to be excetued
 * Return: no return 
 */
/**void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
