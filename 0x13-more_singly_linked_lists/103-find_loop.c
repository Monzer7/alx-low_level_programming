#include "lists.h"
/**
 *find_listint_loop - finds aloop in linked lists
 *@head: adress of list
 *Return: address of the head NULL in failure
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *h, *t;
h = t = head;
while (h != NULL && t != NULL)
{
	h = h->next;
	t = t->next->next;
	if (h == t)
	{
	h = head;
	while (h != t)
	{
		h = h->next;
		t = t->next;
	}
return (h);
	}
}
return (NULL);
}
