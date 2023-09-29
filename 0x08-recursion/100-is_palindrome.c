#include "main.h"
/**
 * len - measure string lenght
 * @lenght: variable stores string lengt
 * Return: the value of string lenght
 */
int len(char *lenght)
{
if (*lenght == '\0')
return (0);
else
lenght++;
return (1 + len(lenght));
}
/**
 * comp - compare the string
 * @bwd: string to be compared
 * @fwd: string comparing
 * Return: 1 if equals zeor other wise
 */
int comp(char *bwd, char *fwd)
{
if (*bwd < *fwd)
return (1);
else if (*bwd == *fwd)
return (comp((bwd - 1), (fwd + 1)));
else
return (0);
}
/**
 * is_palindrome - to test if string is palindrome
 * @s: string to be tested
 * Return: 1 if plaindrome 0 if not
 */
int is_palindrome(char *s)
{
int l = len(s);
return (comp(s + l - 1, s));
}
