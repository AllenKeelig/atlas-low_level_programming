#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	for i;

	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
