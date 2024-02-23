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
	struct dog *newdog;

	if (name == NULL || owner == NULL)
		return NULL;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return NULL;
	
	int name_len = 0;
	while (name[name_len] != '\0')
		name_len++;

	int owner_len = 0;
	while (owner[owner_len] != '\0')
		owner_len++;

	newdog->name = malloc(name_len + 1);
	newdog->owner = malloc(owner_len + 1);
	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return NULL;
	}

	newdog->age = age;

	return newdog;
}

