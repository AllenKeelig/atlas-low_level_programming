#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	int spaces = 0;

	while (n > 0)
	{
		int i;  // Declare 'i' outside the for loop in C90
		/* Print leading spaces */
		for (i = 0; i < spaces; i++)
			_putchar('\t');

		/* Print '\' character */
		_putchar('\\');
		_putchar('\n');

		n--;
		spaces++;
	}
}

