#include <stdio.h>
#include "dog.h"
/**
 * init_dog - intialize the vatiablke in dog
 * @d: the struct file
 * @name: the dog name
 * @age: the dog name
 * @owner:the dog owner
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
