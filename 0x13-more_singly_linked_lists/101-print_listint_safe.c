#include "lists.h"
/**
 *print_listint_safe - prints list
 *@head: list to be printed address
 *Return: number of nodes & 98 in failure
 */
size_t print_listint_safe(const listint_t *head)
{
int count;
const listint_t *new;
if (head == NULL)
	return (98);

new = head;

while (new->next != NULL)
{
printf("[%p] %d\n", (void *)new, new->n);
count++;
new = new->next;
}
return (count);
}
