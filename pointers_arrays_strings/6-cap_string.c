#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - Capitalizes all words in a string based on specified separators.
 * @input: The input string to be capitalized.
 *
 * Return: A pointer to the modified input string.
 */
char *cap_string(char *input)
{
	int capitalize = 1;  /* Flag to indicate whether the next character should be capitalized */

	for (int i = 0; input[i] != '\0'; i++)
	{
		/* Check if the current character is a separator */
		if (input[i] == ' ' || input[i] == '\t' || input[i] == '\n' || input[i] == ',' ||
			input[i] == ';' || input[i] == '.' || input[i] == '!' || input[i] == '?' ||
			input[i] == '"' || input[i] == '(' || input[i] == ')' || input[i] == '{' ||
			input[i] == '}')
		{
			capitalize = 1;  /* Set flag to capitalize the next character */
		}
		else if (capitalize)
		{
			/* Capitalize the current character if the flag is set */
			input[i] = toupper(input[i]);
			capitalize = 0;  /* Reset the flag */
		}
		else
		{
			/* Convert the current character to lowercase */
			input[i] = tolower(input[i]);
		}
	}

	return (input);  /* Return a pointer to the modified input string */
}
