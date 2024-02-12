#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the input string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	/* Initialize length counter */
	int length = 0;

	/* Iterate through the characters of the input string */
	while (*s != '\0')
	{
		length++;
		s++;
	}

	/* Return the total length of the string */
	return (length);
}

