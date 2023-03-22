#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a new type called
 * "dog" that contains a dog's name, age, and owner.
 * @name: Pointer to a string containing the name of the dog.
 * @age: Float value representing the age of the dog.
 * @owner: Pointer to a string containing the
 * name of the dog's owner.
 *
 * Description: This structure defines a new type
 * called "dog", which contains information
 * about a dog including its name, age, and owner.
 * The name and owner are represented as pointers
 * to strings, while the age is represented as
 * a float value.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* prototype functions */
dog_t *new_dog(char *name, float age, char *owner);


#endif /* DOG_H */
