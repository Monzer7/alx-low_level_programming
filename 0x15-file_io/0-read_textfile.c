#include "main.h"
/**
 * read_textfile - function read from file and write to stdo
 * @filename: file to be read from
 * @letters: number of letter to be read
 * Return: the number of letter read and prints
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t nread, nwrite;
int p;
char *buf;

/*creating buufer*/

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
	return (0);

if (filename == NULL)
	return (0);
/*opening file*/
p = open(filename, O_RDONLY);
if (p == -1)
	return (0);
/*reading file*/
nread = read(p, buf, letters);
if (nread == -1)
	return (0);
/*write to stndard output*/
nwrite = write(STDOUT_FILENO, buf, nread);
if (nwrite == -1)
	return (0);
/* free buf*/
free(buf);
/*closing file*/
close(p);
return (nread);
}
