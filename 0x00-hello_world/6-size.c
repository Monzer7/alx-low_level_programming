#include <stdio.h>
/**
 * main - enrty point
 *
 * Discreption: function that prints var size
 * Return: Always 0 (suceess)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
	printf("Size of a float: %lu byte(s)", sizeof(float));

	return (0);
}
