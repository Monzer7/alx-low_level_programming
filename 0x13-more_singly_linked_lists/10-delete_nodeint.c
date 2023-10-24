#include "lists.h"
/**
 *delete_nodeint_at_index - deletes node at index
 *@head:adress of list
 *@index: number of node to be deleted
 *Return: on sucess 1 on failure -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *new, *temp;

if (*head == NULL)
	return (-1);

new = *head;
	if (index == 0)
{
	*head = new->next;
	free(new);
	return (1);
}
while (i < (index - 1))
{
new = new->next;
	i++;
}

if (i != (index - 1) || new->next == NULL)
	return (-1);
temp = new->next;
new->next = (new->next)->next;
free(temp);

return (1);
}
