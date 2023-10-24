#include "lists.h"
/**
 * add_nodeint - adds node at the beginning
 * @head: adresss of the list
 * @n: value to be added to the node
 * Return:adress of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
	return (NULL);
new->n = n;
new->next = *head;
*head = new;

return (new);
}
