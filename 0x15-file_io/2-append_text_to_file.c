#include "main.h"
/**
 *append_text_to_file - append text at end of file
 *@filename: file to be appended
 *@text_content: text to be added
 *Return: on success 1,on failure -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int p;
int app;
int lenght;
if (filename == NULL)
	return (-1);
if (text_content == NULL)
	return (-1);

/*opening file with amende*/
p = open(filename, O_WRONLY | O_APPEND);
if (p == -1)
	return (-1);
/*appending file*/
if (text_content)
{
for (lenght = 0; text_content[lenght]; lenght++)
;

app = write(p, text_content, lenght);
if (app == -1)
	return (-1);
}
close(p);
return (1);
}
