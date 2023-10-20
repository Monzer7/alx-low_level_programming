#include "lists.h"
#include <string.h>
/**
 * _str - measure string lenght
 * @s: string to be measured
 * Return: string lenght
 */
int _str(const char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;

return (i);
}

/**
 *add_node - add nodes at the begining of the link
 *@head:first pointer of the list
 *@str: string to be added to new node
 *Return: adress of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
if (*head == NULL)
return (NULL);
if (str == NULL)
return (NULL);
if (strdup(str) == NULL)
	return (NULL);
else
{
list_t *p = NULL;
p = malloc(sizeof(list_t));
if (p == NULL)
{
free(p->next);
free(p);
return (NULL);
}
p->str = strdup(str);
p->len = _str(str);
p->next = *head;
*head = p;
}

return (*head);
}
