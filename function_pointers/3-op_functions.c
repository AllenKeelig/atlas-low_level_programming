#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of the subtraction (a - b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides two integers
 * @a: Dividend
 * @b: Divisor (non-zero)
 * Return: Result of the division (a / b)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}
/**
 * op_mod - Computes the modulus of two integers
 * @a: Dividend
 * @b: Divisor (non-zero)
 * Return: Remainder of the division (a % b)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}
