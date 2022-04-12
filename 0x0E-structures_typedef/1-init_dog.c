#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: pointer to initialized struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: initialized struct with fields
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    d->name = name;
    d->age = age;
    d->owner = owner;
}
