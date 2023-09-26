#include "main.h"
#include <stdio.h>
/**
 * _strstr - to locate a substring
 * @haystack: source string
 * @needle: string to be searched
 * Return: pointer to the begining of the string
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, m = 0, k;

if (needle[0] == '\0')
return (haystack);

while (haystack[i] != '\0')
{
if (haystack[i] == needle[0])
{
k = i;
while(needle[m] != '\0')
{

if (haystack[k] == needle[m])
{
k++;
m++;
}
else 
break;

}
if (needle[m] == '\0')
{
return(haystack + i);
}
}
i++;
}
return (NULL);
}
