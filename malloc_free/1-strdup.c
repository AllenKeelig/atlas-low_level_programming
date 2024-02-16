#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string using malloc.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicated string, or NULL if str
 *         or if there is insufficient memory.
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);

	duplicate = (char *)malloc((strlen(str) + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL); /* Insufficient memory */

	strcpy(duplicate, str);

	return (duplicate);
}

