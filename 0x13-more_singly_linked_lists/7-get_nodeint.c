#include "lists.h"
/**
 * get_nodeint_at_index - function that search that search a list
 * @head: adress of the list
 * @index: location of nore to be returnr
 * Return: adrees of nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *new;
if (head == NULL)
	return (NULL);

for (i = 0; i <= index; i++)
{
new = head;
new = new->next;
}
return (new);
}
