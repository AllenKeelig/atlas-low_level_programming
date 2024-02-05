#include <stddef.h>

/**
 * _strchr - Locates the first occurrence of the character c in the string s.
 * @s: Pointer to the input string.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character c
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return s; /* Found the character.*/
		s++;
	}

	/* If the character is not found, return NULL */
	return (' ');
}

