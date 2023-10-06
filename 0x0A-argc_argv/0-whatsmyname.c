#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: the string of arguments passed
 * Return: in case of success always zero
 */
int main(int argc, char **argv)
{
while (argc--)
printf("%s\n", *argv);

return (0);
}
