#include <stdlib.h>

int *array_range(int min, int max)
{
	int *result;
	int i;

	if (min > max)
		return (NULL);

	result = malloc((max - min + 1) * sizeof(int));

	if (result == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		result[i - min] = i;

	return (result);
}

