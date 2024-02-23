#include <stdio.h>

/**
 * array_iterator - executes a function across an array.
 * @array: the array
 * @size: ...
 * @action: the function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
