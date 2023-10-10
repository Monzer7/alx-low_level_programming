#ifndef DOG_H
#define DOG_H

/**
 * struct dog - for dogs owners
 * @name: dog's bane
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * u_int - Typedef for unsigned int
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
