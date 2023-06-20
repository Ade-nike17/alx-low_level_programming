#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog
 *
 * @name: Pointer to the name of the dog
 * @age: Age of the dog in years
 * @owner: Pointer to the name of the dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
