#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes variable of type atruct dog
 *
 * @d: pointer to struct
 * @name: name of dog
 * @age: dog's age
 * @owner: owner of dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
