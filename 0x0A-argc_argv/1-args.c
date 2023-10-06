#include <stdio.h>
#include <stdlib.h>
/**
 * main - enrty point
 * @argc: number of argument passed
 * @argv: name of arguments passed
 * Return: always zero in case of success
 */
int main(int argc, char **argv __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
