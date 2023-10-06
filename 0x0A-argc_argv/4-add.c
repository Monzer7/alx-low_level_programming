#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: names of argument passed
 * Return: in case of success 0 and 1 in case of fail
 */
int main(int argc, char **argv)
{
int j, res = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (j = 1; j < argc; j++)
{
if (!(*argv[j] < 48 || *argv[j] > 57))
res = res + atoi(argv[j]);
else
{
printf("ERROR\n");
return (1);
}
}
printf("%d\n", res);
return (0);
}
