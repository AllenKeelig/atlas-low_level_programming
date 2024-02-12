#include <stdio.h>

/**
 * _strncpy - Copies at most n characters from src to dest.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of characters to copy.
 *
 * Return: Pointer to the copied string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*src && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}

	/* Pad the destination string with null characters if needed */
	while (n > 0)
	{
		*temp = '\0';
		temp++;
		n--;
	}

	return (dest);
}
