#include "lists.h"
/**
 *free_listint2 - free lists
 *@head: adress of list
 */
void free_listint2(listint_t **head)
{
listint_t *p;
if (*head == NULL)
	return;

while (*head != NULL)
{
p = *head;
free(p);
*head = p->next;
}
}
