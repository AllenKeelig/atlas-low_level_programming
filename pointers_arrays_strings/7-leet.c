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
	char *vowels_and_letters = "aeotlAEOTL";

	len = strlen(input);
	result = (char *)malloc((len + 1) * sizeof(char));

	for (i = 0; i < len; i++)
	{
		if (strchr(vowels_and_letters, input[i]) != NULL)

		{
			char replacement = (*input == 'a' || *input == 'A') * ('4' - *input)
				+ (*input == 'e' || *input == 'E') * ('3' - *input)
				+ (*input == 'o' || *input == 'O') * ('0' - *input)
				+ (*input == 't' || *input == 'T') * ('7' - *input)
				+ (*input == 'l' || *input == 'L') * ('1' - *input);

		}
		else
		{
			result[i] = input[i];
		}
	}

	result[len] = '\0';
	return (result);
}
