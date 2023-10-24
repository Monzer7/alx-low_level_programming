#include "lists.h"
/**
 *sum_listint - sum all data of nodes
 *@head: adress of list
 *Return: the sum of all data
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *new;
new = head;
if (head == NULL)
	return (0);
while (new->next != NULL)
{
sum = sum + (new->n);
new = new->next;
}
if (new->next == NULL)
	sum = sum + (new->n);

return (sum);
}
