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
int i, res;
if (argc == 1)
{
printf("0\n");
}
for (i = 1; i < argc; i++)
{
if (*argv[i] < 48 || *argv[i] > 57)
printf("ERROR\n");
return (1);
if (argc > 1)
{
res = res + atoi(argv[i]);

printf("%d\n", res);
}
}
return (0);
}
