#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strcpy - because its easier to make one than not use it.
 *
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog (struct dog), or NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newdog;
	int name_len = 0;
	int owner_len = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	while (name[name_len] != '\0')
		name_len++;

	while (owner[owner_len] != '\0')
		owner_len++;

	newdog->name = malloc(name_len + 1);
	newdog->owner = malloc(owner_len + 1);
	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}

	_strcpy(newdog->name, name);
	_strcpy(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}

