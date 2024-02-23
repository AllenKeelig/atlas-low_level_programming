#include <stdio.h>

/**
 * int_index - searching for an integer
 * @array: yup
 * @size: its a size
 * @cmp: pointer to the function compared to
 *
 * Return: integers location or NULL if LOL
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
