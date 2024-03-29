#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Unsigned long int.
 * @index: Index of the bit to retrieve, starting from 0.
 *
 * Return: The value of the bit at the specified index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
