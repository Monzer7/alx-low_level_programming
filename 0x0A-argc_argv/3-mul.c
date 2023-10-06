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
int num1;
int num2;

if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
res = num1 * num2;
printf("%d\n", res);
return (0);
}

