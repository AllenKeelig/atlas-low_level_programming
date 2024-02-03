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
	int i; /* Declaration moved outside of the loop */
	int capitalize_next = 1; /* Flag to indicate the next character should be capitalized */

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capitalize_next && isalpha(str[i]) && !isdigit(str[i]))
		{
			/* Capitalize the current character if it's an alphabet character */
			str[i] = toupper(str[i]);
			capitalize_next = 0;
		}
	}

	return (str);
}

