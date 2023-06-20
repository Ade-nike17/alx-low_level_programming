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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
