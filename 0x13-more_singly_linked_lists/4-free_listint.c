#include "lists.h"
/**
 * free_listint - free the list
 * @head: adress of the link
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (head != NULL)
{
	ptr = head;
	head = head->next;
	free(ptr);
}
}
