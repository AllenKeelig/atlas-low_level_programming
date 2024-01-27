#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the input string
 *
 * Description: This function reverses the characters in the input string.
 */
void rev_string(char *s)
{
	int length = 0;
	int start, end;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Swap characters from start to end until reaching the middle */
	start = 0;
	end = length - 1;
	while (start < end)
	{
		/* Swap characters at start and end positions */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move towards the middle of the string */
		start++;
		end--;
	}
}

