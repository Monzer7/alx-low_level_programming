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
int i;
int j;
if (argc != 3)
{
printf("ERROR\n");
return (1);
}
i = atoi(argv[1]);
j = atoi(argv[2]);
res = i * j;
printf("%d\n", res);
return (0);
}

