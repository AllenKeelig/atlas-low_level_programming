#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of the memory to allocate
 *
 * Return: A pointer to the allocated memory
 *         Exits with status 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98); /* Terminate with status 98 on malloc failure */
	}

	return (ptr);
}

