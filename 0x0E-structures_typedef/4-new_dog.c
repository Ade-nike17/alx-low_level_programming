#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function creates a new dog
 *
 * @name: pointer to name of dog
 * @age: dog's age
 * @owner: pointer to owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *name_cp;
	char *owner_cp;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	name_cp = malloc(strlen(name) + 1);
	owner_cp = malloc(strlen(owner) + 1);
	if (name_cp == NULL || owner_cp == NULL)
	{
		free(name_cp);
		free(owner_cp);
		free(ptr);
		return (NULL);
	}
	strcpy(name_cp, name);
	strcpy(owner_cp, owner);

	ptr->name = name_cp;
	ptr->age = age;
	ptr->owner = owner_cp;

	return (ptr);
}
