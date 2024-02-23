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
	dog_t *dog;
	struct *newdog;

	if (name == NULL || owner == NULL)
		return NULL;

	dog *newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return NULL;

	newdog->name = strdup(name);
	newdog->owner = strdup(owner);

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		eturn NULL;
	}

	newdog->age = age;

	return newdog;
}

