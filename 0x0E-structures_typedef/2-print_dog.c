#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to be printed
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	char *name;
	char *owner;
	float age;

	if (d == NULL)
		return;
	
	name = (d->name != NULL) ? d->name : "(nil)";
	owner = (d->owner != NULL) ? d->owner : "(nil)";
	
	printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
}
