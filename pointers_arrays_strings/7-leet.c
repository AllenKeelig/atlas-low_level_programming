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

	len = strlen(input);
	result = (char *)malloc((len + 1) * sizeof(char));

	for (i = 0; i < len; i++)
	{
		if (input[i] == 'a' || input[i] == 'A' ||
			input[i] == 'e' || input[i] == 'E' ||
			input[i] == 'o' || input[i] == 'O' ||
			input[i] == 't' || input[i] == 'T' ||
			input[i] == 'l' || input[i] == 'L')
		{
			result[i] = (input[i] == 'a' || input[i] == 'A') ? '4' :
						(input[i] == 'e' || input[i] == 'E') ? '3' :
						(input[i] == 'o' || input[i] == 'O') ? '0' :
						(input[i] == 't' || input[i] == 'T') ? '7' :
						(input[i] == 'l' || input[i] == 'L') ? '1' : input[i];
		}
		else
		{
			result[i] = input[i];
		}
	}

	result[len] = '\0';
	return (result);
}
