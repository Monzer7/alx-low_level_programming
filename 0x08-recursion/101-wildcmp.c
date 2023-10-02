/**
 * _match - check if a string after wildcard matches s1
 * @s1:a string to be checked
 * @s2: the second string
 * @s3: variable to hold string after wilccd
 * Return: 1 if matched, 0 if not
 */

int _match(char *s1, char *s2, char *s3)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == '\0' && *s2 == '*')
return (_match(s1, s2 + 1, s2 + 1));
if (*s1 == '\0' && *s2 != '\0')
return (0);
if (*s2 == '*')
return (_match(s1, s2 + 1, s2 + 1));
if (*s1 == *s2)
return (_match(s1 + 1, s2 + 1, s3));
else
return (_match(s1 + 1, s3, s3));
}

/**
 * wildcmp - compare if string with wildcard mattches
 * @s1: string to be checked
 * @s2: second dtring
 * Return: 1 if matched, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
else if (*s2 == '*')
return (_match(s1, (s2 + 1), (s2 + 1)));
else
return (0);
}
