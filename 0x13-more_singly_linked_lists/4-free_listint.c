#include "lists.h"
/**
 * free_listint - free the list
 * @head: adress of the link
 * Return: no return
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	listint *rm;
while (head != NULL)
{	
	rm = head;
	free(rm);
head= head->next;
}
}
