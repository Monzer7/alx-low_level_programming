#include "main.h"
void detect_error(int file_from, int file_to, char *argv[]);
/**
 * main - entry point
 * @argc: number of arg
 * @argv: arguments array.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nchars, nwrite;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	detect_error(file_from, file_to, argv);

	nchars = sizeof(char) * 1024;

	while (nchars == 1024)
	{
		nchars = read(file_from, buf, 1024);
		if (nchars == -1)
			detect_error(-1, 0, argv);
		nwrite = write(file_to, buf, nchars);
		if (nwrite == -1)
			detect_error(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

/**
 *detect_error - detect error print error message
 *@file_from: file we copping from
 *@file_to: file to bve copied to
 *@argv: arguments array
 */
void detect_error(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);

if (file_to == -1)
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
}
