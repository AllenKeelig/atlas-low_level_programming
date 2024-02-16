#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific
 * @size: The size of the array.
 * @c: The char with which to initialize the array.
 *
 * Return: A pointer to the allocated array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *newArray;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	newArray = (char *)malloc(size * sizeof(char));

	if (newArray == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}

	for (i = 0; i < size; i++)
	{
		newArray[i] = c; /* Initialize each element with the specifie*/
	}

	return (newArray);
}

