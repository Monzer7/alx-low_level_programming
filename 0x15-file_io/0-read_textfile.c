#include "main.h"
/**
 * read_textfile - function read text file
 * @filename: file to be read from
 * @letters: number of letter to be read
 * Return: the number of letter read.
 */
/*ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t nread, nwrite;
	char *file;

	if (filename == NULL)
		return (0);
	fp = open("filename", O_RDONLY);

	if (fp == -1)
		return (0);
	file = malloc(sizeof(char) * letters);
	if (file == NULL)
		return (0);
	nread = read(fp, file, letters);
	if (nread == -1)
	{
		free(file);
		close(fp);
		return (0);
	}
	nwrite = write(STDOUT_FILENO, file, nread);
		if (nwrite == -1)
		{
			free(file);
	close(fp);
	return (0);
		}
	close(fp);
	return (nwrite);
}*/
#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
