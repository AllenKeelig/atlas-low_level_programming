#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value for the array (inclusive).
 * @max: The maximum value for the array (inclusive).
 *
 * Return: A pointer to the newly created array, or NULL if min > max or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *result;  /* Pointer to the newly created array */
	int i;        /* Loop variable */

	/* Check if min is greater than max */
	if (min > max)
		return (NULL);

	/* Allocate memory for the array */
	result = malloc((max - min + 1) * sizeof(int));

	/* Check if malloc failed */
	if (result == NULL)
		return (NULL);

	/* Fill the array with values from min to max */
	for (i = min; i <= max; i++)
		result[i - min] = i;

	/* Return the pointer to the newly created array */
	return (result);
}

