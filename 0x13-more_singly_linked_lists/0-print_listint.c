#include "list.h"
/**
 *print_listint - prints all list elemnts
 *@h: list to be printed
 *Return:  number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t num;
while (h != NULL)
{
printf("%d\n", h->n);
num++
h = h->next
}
return (num);
}
