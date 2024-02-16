#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	size_t len_s1 = (s1 == NULL) ? 0 : strlen(s1);
	size_t len_s2 = (s2 == NULL) ? 0 : strlen(s2);

	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));

	/* Check if memory allocation was successful */
	if (concatenated == NULL)
	{
		return NULL; /* Insufficient memory */
	}

	/* Copy s1 to the concatenated string */
	if (s1 != NULL)
	{
		strcpy(concatenated, s1);
	}

	/* Concatenate s2 to the concatenated string */
	if (s2 != NULL)
	{
		strcat(concatenated, s2);
	}

	return concatenated;
}

