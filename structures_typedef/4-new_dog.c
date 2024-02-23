#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog (struct dog), or NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog

	if (name == NULL || owner == NULL)
		return NULL;

	dog *newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return NULL;

	newDog->name = strdup(name);
	newDog->owner = strdup(owner);

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return NULL;
	}

	newDog->age = age;

	return newDog;
}

