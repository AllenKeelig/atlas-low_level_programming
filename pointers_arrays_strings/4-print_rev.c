#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the input string
 *
 * Description: This function calculates the length of the input string,
 *              then prints the characters in reverse order followed by a ne.
 */
void print_rev(char *s)
{
	/* Calculate the length of the string */
	int i, length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	/* Print the characters in reverse order */
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	/* Print a new line at the end */
	_putchar('\n');
}

