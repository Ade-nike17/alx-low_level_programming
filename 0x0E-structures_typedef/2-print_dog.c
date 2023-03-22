#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function prints a struct dog
 *
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", (d->age != 0.0f) ? d->age : 0.0f);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
