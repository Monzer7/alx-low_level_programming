#include "main.h"
/**
 *create_file - it creates a file
 *@filename: the name of the file to be created
 *@text_content: content to ba added to the file
 *Return: on seccuess 1 ,on failure -1
 */
int create_file(const char *filename, char *text_content)
{
int p;
int trunc, lenght;

if (filename == NULL)
	return (-1);
/*creating file*/

p = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (p == -1)
	return (-1);
if (text_content == NULL)
text_content = "";
/*trunecate if found*/

for (lenght = 0; text_content[lenght] != '\0'; lenght++)
;

trunc = write(p, text_content, lenght);
if (trunc == -1)
	return (-1);
/*closing */
close(p);
return (1);
}
