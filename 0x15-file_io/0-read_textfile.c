#include "main.h"
/**
 * read_textfile - function read text file
 * @filename: file to be read from
 * @letters: number of letter to be read
 * Return: the number of letter read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
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
	return (nread);
}
