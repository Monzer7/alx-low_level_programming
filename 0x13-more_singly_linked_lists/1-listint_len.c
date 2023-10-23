#include "lists.h"
/**
 *listint_len - finction counts number of nodes
 *@h:head of the noode
 *Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h != NULL)
{
	h = h->next;
	num++;
}
return (num);
}
