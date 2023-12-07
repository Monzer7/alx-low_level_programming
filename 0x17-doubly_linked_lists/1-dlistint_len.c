#include "lists.h"
/**
 * dlistint_len - count list lenght
 * @h: head of the lisdt
 * Return: number of lists
 */
size_t dlistint_len(const dlistint_t *h);
{
	const dlistint_t *node = h;
		size_t count = 0;

		while (node != NULL)
		{
			node = node->next;
			count++;
		}
	return (count)
}
