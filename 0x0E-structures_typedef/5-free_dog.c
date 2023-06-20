#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees dog
 *
 * @d: pointer to typedef struct dog_t
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
