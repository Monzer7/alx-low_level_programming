#include "main.h"
#include <stdio.h>
/**
 * rot13 - ciphering technique
 * @s:to maniplute strings
 * Return: ciphered string
 */
char *rot13(char *s)
{
int i;
int j; /* temp*/
char e[54] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char c[54] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (j = 0; s[j] != '\0'; j++) /*loop through string*/
{
i = 0;
while (e[i] != '\0' && s[j] != e[i]) /*loop through rot13 arr*/
i++;

if (s[j] == e[i]) /*if alpha matches, set to index in b arr*/
s[j] = c[i];
}

return (s);
}
