#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int capitalize_next = 1; /* Flag to indicate the next character should be capitalized */

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (capitalize_next && isalpha(str[i]))
		{
			/* Capitalize the current character if it's an alphabet character */
			str[i] = toupper(str[i]);
			capitalize_next = 0;
		}
		else if (!isalpha(str[i]))
		{
			/* Set the flag to capitalize the next alphabet character */
			capitalize_next = 1;
		}
	}

	return (str);
}

