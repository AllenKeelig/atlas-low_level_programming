#include "main.h"

/**
 * print_square - Prints a square of a given size using #
 * @size: Size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

int i=0, j=0
	for (i < size; i++)
	{
		for ( j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

