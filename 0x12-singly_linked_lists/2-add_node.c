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
list_t *new = NULL;
if (str == NULL)
return (NULL);
if (strdup(str) == NULL)
{
free(strdup(str));
return (NULL);
}

new = malloc(sizeof(list_t));
if (new == NULL)
{
free(new->next);
free(new);
return (NULL);
}

new->str = strdup(str);
new->len = _str(str);
new->next = *head;
*head = new;

if (*head == NULL)
	new->next = NULL;

return (new);
}
