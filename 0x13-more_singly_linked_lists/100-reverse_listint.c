#include "lists.h"
/**
 *reverse_listint - revers linked list
 *@head: list adress
 *Return: pointer to the new first
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur, *prev;
if (*head == NULL)
	return (NULL);

prev = NULL;
while (*head != NULL)
{
	cur = (*head)->next;
	(*head)->next = prev;
	prev = *head;
	*head = cur;
}
	*head = prev;
	return (*head);
}
