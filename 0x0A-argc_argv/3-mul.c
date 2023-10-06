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
int x;
if (argc < 2)
{
printf("ERROR");
return (1);
}
x = *argv[1] * (*argv[2]);
printf("%d\n", x);
return (0);
}

