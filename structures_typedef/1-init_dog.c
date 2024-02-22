#include "dog.h"

/**
 * init_dog - Initializes a struct dog with the given values.
 * @d: Pointer to the struct dog variable to be initialized.
 * @name: Pointer to a character array representing the dog's name.
 * @age: Age of the dog (floating-point number).
 * @owner: Pointer to a character array representing the owner's name.
 *
 * Return: (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

