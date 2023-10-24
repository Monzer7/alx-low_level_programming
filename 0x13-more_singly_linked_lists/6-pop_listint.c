#include "lists.h"
/**
 * pop_listint - delete the head of the node
 * @head: adrees of the node;
 * Return: the value in head node
 */
int pop_listint(listint_t **head)
{
int value;
listint_t *new;
if (head == NULL)
	return (0);

new = *head;
value = new->n;
*head = new->next;

free(new);
return (value);
}
