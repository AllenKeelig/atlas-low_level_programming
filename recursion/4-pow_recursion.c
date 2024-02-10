#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Calculates the power of a number recursively.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		/* Exponent is negative, return -1 as error */
		return (-1);
	}
	else if (y == 0)
	{
		/* Any number raised to the power of 0 is 1 */
		return (1);
	}
	else
	{
		/* Recursively calculate x^y by reducing the exponent */
		return (x * _pow_recursion(x, y - 1));
	}
}

