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
	size_t len = strlen(input);
	char *result = (char *)malloc((len + 1) * sizeof(char));

	for (size_t i = 0; i < len; i++)
	{
		switch (input[i])
		{
			case 'a':
			case 'A':
				result[i] = '4';
				break;
			case 'e':
			case 'E':
				result[i] = '3';
				break;
			case 'o':
			case 'O':
				result[i] = '0';
				break;
			case 't':
			case 'T':
				result[i] = '7';
				break;
			case 'l':
			case 'L':
				result[i] = '1';
				break;
			default:
				result[i] = input[i];
				break;
		}
	}

	result[len] = '\0';
	return (result);
}
