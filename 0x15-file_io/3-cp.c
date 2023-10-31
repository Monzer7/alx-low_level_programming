#include "main.h"
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

