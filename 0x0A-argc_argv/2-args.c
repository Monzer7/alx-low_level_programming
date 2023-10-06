#include <stdio.h>
#include <stdlib.h>
/**
 * main - enrty point
 * @argc: number of arguments
 * @argv: name of arguments
 * Return: always 0 in case of success
 */
int main(int argc, char **argv)
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}
