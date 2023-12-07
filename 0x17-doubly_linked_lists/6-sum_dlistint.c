#include "lists.h"
/**
 * sum_dlistint - it sums all the lists data
 * @head: head of our liust
 * Return: sum of data , 0 if the lost is empty.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
