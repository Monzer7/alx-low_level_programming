#include "lists.h"
#include "string.h"
/**
 * add_node_end - add new node at the end
 * @head: first node
 * @str: string to be stored in node
 * Return: address of new added
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;
if (str == NULL)
	return (NULL);
if (strdup(str) == NULL)
{
free(strdup(str));
return (NULL);
}
new = malloc(sizeof(new));
if (new == NULL)
{
free(new);
return (NULL);
}
new->str = strdup(str);
new->len = strlen(str);
new->next = NULL;

if (*head == NULL)
	*head = new;
else
{
temp = *head;
while (temp->next != NULL)
	temp = temp->next;

temp->next = new;
}
return (new);
}
