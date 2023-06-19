#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog
 *
 * @name: Pointer to the name of the dog
 * @age: Age of the dog in years
 * @owner: Pointer to the name of the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
