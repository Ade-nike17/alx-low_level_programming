#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function takes a pointer to a dog_t
 *
 * @d: pointer to dog_t
 *
 * Return: null
 */

void free_dog(dog_t *d)
{
	free(d);
}
