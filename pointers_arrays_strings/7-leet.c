#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @input: The input string to be encoded.
 *
 * Return: A dynamically allocated string containing the encoded result.
 */

char *leet(char *input)
{
	size_t len, i;
	char *vowels_and_letters = "aeotlAEOTL";
	char *leet_replacements = "4307143071";

	len = strlen(input);

	for (i = 0; i < len; i++)
	{
		char *pos = strchr(vowels_and_letters, input[i]);

		if (pos != NULL)
		{
			int index = pos - vowels_and_letters;

			input[i] = leet_replacements[index];
		}
	}

	return (input);
}
