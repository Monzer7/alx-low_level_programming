#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints dog contains
 * @d: name of file
 * Return: no return
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

else if (d->name == NULL)
printf("Name: (nil)\n");


else if (d->owner == NULL)
printf("Owner: (nil)\n");

else if (d->owner == NULL && d->name == NULL)
printf("Name: (nil)\nAge: 0.000000\nOwner: (nil)\n");

else
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
