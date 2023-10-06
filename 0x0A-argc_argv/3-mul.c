#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of argument
 * @argv: namee of arguments
 * Return:In case of success 0 and 1 in case of error
 */
int main(int argc, char **argv)
{
int res;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
res = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", res);
}
return (0);
}

