#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * init_dog - function initializes a variable of type struct dog
 *
 * @d: pointer to struct dog
 * @name: charcter array for the name of dog
 * @age: floating-point number for the age of dog
 * @owner: character array for the owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = malloc(strlen(name) + 1);
	if (d->name != NULL)
	{
		strcpy(d->name, name);
	}

	d->age = age;

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner != NULL)
	{
		strcpy(d->owner, owner);
	}
}
