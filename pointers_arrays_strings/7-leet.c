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
			char replacement = (*ptr == 'a' || *ptr == 'A') * ('4' - *ptr)
				+ (*ptr == 'e' || *ptr == 'E') * ('3' - *ptr)
				+ (*ptr == 'o' || *ptr == 'O') * ('0' - *ptr)
				+ (*ptr == 't' || *ptr == 'T') * ('7' - *ptr)
				+ (*ptr == 'l' || *ptr == 'L') * ('1' - *ptr);

		}
		else
		{
			result[i] = input[i];
		}
	}

	result[len] = '\0';
	return (result);
}
