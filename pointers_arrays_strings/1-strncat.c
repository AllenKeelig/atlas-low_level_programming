#include <stdio.h>

/**
 * _strncat - Concatenates n characters from src to dest.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of characters to concatenate.
 *
 * Return: Pointer to the concatenated string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	/* Find the end of the destination string */
	while (*temp)
		temp++;

	/* Copy at most n characters from source to destination */
	while (*src && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}

	*temp = '\0';

	return (dest);
}

