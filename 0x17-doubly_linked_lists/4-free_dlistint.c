#include "lists.h"

/**
 * free_dlistint - frees the lisst
 * @head: head of list
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next_node;

	if (head != NULL)
	{
		current = head;
		next_node = head->next;
		while (next_node != NULL)
		{
			free(current);
			current= next_node;
			next_node = next_node->next;
		}
		free(current);
	
