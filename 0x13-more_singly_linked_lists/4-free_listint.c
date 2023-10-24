#include "lists.h"
/**
 * free_listint - free the list
 * @head: adress of the link
 * Return: no return
 */
void free_listint(listint_t *head)
{
free(head->next);
free(head);
}
