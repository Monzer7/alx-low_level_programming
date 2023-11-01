#include "main.h"
/**
 * __exit - prints error messages and exits with exit value
 * @err: num is either exit value or file descriptor
 * @s: str is a name, either of the two filenames
 * @f: file descriptor
 * Return: 0 on success
 **/
int __exit(int err, char *s, int f)
{
	switch (err)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(err);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(err);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(err);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close f %d\n", f);
		exit(err);
	default:
		return (0);
	}
}

/**
 * main - enrty point
 * @argc: arg bnumber
 * @argv: argum array
 * Return: 0 (success), 97-100 (exit value errors)
 */
int main(int argc, char *argv[])
{
	int f_1, f_2, n_read, n_wrote;
	char *buf[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	/*open file to be copied toe*/
	f_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (f_2 == -1)
		__exit(99, argv[2], 0);

	/*open file to copy from*/
	f_1 = open(argv[1], O_RDONLY);
	if (f_1 == -1)
		__exit(98, argv[1], 0);

	/*read from file f_1 to the buffer*/
	while ((n_read = read(f_1, buf, 1024)) != 0)
	{
		if (n_read == -1)
			__exit(98, argv[1], 0);
/*write from buffer to file f_2*/
		n_wrote = write(f_2, buf, n_read);
		if (n_wrote == -1)
			__exit(99, argv[2], 0);
	}
	close(f_2) == -1 ? (__exit(100, NULL, f_2)) : close(f_2);
	close(f_1) == -1 ? (__exit(100, NULL, f_1)) : close(f_1);
	return (0);
}
