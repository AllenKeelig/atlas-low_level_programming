#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _puts_recursion - Prints a string using recursion.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	/* Calculate the length of the string */
	size_t length = strlen(s);

	/* Base case: if the length is 0, print a newline and return */
	if (length == 0)
	{
		putchar('\n');
		return;
	}

	/* Print the current character and move to the next character recursively */
	putchar(*s);
	_puts_recursion(s + 1);
}

