#include "lists.h"
/**
 *insert_nodeint_at_index - insert in given index
 *@head: node adress
 *@idx: index to be inserted at
 *@n: the value in the node
 *Return: the adress of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *new, *temp;

if (*head == NULL)
	return (NULL);

new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

new->n = n;
if (idx == 0)
{
	new->next = *head;
	*head = new;
	return (new);
}

temp = *head;

while (i < (idx - 1))
{
	temp = temp->next;
	i++;

	if (temp == NULL)
	{
	free(new);
	return (NULL);
	}
}

new->next = temp->next;
temp->next = new;
return (new);
}
