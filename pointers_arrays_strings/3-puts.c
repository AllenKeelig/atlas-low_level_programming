#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: Pointer to the input string
 *
 * Description: This function prints each character in the input string to
 * the standard output, followed by a new line.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		/* Print each character in the string */
		_putchar(*str);
		str++;
	}

	/* Print a new line at the end */
	_putchar('\n');
}

