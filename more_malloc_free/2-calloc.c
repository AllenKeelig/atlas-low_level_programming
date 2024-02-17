#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory or NULL if malloc fails
 *         or if nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	unsigned int total_size = nmemb * size;
	void *ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	/* Set the allocated memory to zero */
	unsigned char *byte_ptr = (unsigned char *)ptr;
	for (unsigned int i = 0; i < total_size; i++)
		byte_ptr[i] = 0;

	return (ptr);
}

