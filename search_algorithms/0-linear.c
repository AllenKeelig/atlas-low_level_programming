#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * linear_search - Searches for a value in an array using linear search
 * @array: Pointer to the first element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search for in the array
 *
 * Return: The first index where the value is found, or -1 if not found
 *
 * Description: This function performs a linear search in an array. It iterates
 * through the array and prints each value being checked. If the value is found
 * in the array, it returns the index at which the value is found. If the array
 * is NULL, or the value is not found, it returns -1.
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
