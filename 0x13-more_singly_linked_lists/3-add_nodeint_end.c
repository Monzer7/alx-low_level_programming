#include "lists.h"
/**
 * add_nodeint_end - add new node at the end
 * @head: adress of the list
 * @n: value to be added to the node
 * Return: adress of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *temp;
new = malloc(sizeof(listint_t));
if (new == NULL)
	return (NULL);

new->n = n;
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
