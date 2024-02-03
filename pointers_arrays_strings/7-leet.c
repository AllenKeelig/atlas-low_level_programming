#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * leet - Encodes a string into 1337.
 * @input: The input string to be encoded.
 *
 * Return: A dynamically allocated string containing the encoded result.
 */
char *leet(char *input)
{
	char *result;
	size_t len;
	size_t i;
	char input[] = "example";
	char *vowels_and_letters = "aeotlAEOTL";

	len = strlen(input);
	result = (char *)malloc((len + 1) * sizeof(char));

	for (i = 0; i < len; i++)
	{
		if (strchr(vowels_and_letters, input[i]) != NULL)

		{
			result[i] = (input[i] == 'a') ? '4' :
				(input[i] == 'A') ? '4' :
				(input[i] == 'e') ? '3' :
				(input[i] == 'E') ? '3' :
				(input[i] == 'o') ? '0' :
				(input[i] == 'O') ? '0' :
				(input[i] == 't') ? '7' :
				(input[i] == 'T') ? '7' :
				(input[i] == 'l') ? '1' :
				(input[i] == 'L') ? '1' : input[i];
		}
		else
		{
			result[i] = input[i];
		}
	}

	result[len] = '\0';
	return (result);
}
