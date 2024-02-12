#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	char result;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	result = *s1 - *s2;

	return (result);
}
