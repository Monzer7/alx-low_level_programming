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
int i = atoi(argv[1]);
int j = atoi(argv[2]);
if (argc < 2)
{
printf("ERROR");
return (1);
}
res = i * j;
printf("%d\n", res);
return (0);
}

