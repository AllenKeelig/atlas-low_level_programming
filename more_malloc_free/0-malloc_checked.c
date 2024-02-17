#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of the memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, it causes normal process termination with a
 *         status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	tab
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		tab	tab	fprintf(stderr, "Memory allocation failed\n");
		tab	tab	exit(98);
	}
	return (ptr);
}

