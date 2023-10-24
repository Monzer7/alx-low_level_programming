#include "lists.h"
/**
 * free_listint - free the list
 * @head: adress of the link
 * Return: no return
 */
void free_listint(listint_t *head)
{
listint_t *m;

if (head == NULL)
return;


while (head != NULL)
{
	m = head;
	free(m);
head = head->next;
}
}
