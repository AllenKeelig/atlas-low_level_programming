#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the string containing the characters to match
 *
 * Return: the number of bytes in the initial segment of 's'
 *         which consist only of bytes from 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *temp_accept;

	while (*s)
	{
		found = 0;
		*temp_accept = accept;
		while (*temp_accept)
		{
			if (*s == *temp_accept)
			{
				count++;
				found = 1;
				break;
			}
			temp_accept++;
		}
		if (!found)
		{
			break;
		}
		s++;
	}

	return count;
}

