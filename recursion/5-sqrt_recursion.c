#include <stdio.h>
#include "main.h"

/**
 * custom_sqrt_helper - Helper function for custom_sqrt recursion
 * @n: The number for which the square root is calculated
 * @guess: The current guess
 * @prev_guess: The previous guess
 *
 * Return: The square root approximation
 */
int custom_sqrt_helper(int n, int guess, int prev_guess)
{
	if (n == 0 || n == 1)
		return (n);

	if (guess == prev_guess)
		return (guess);

	return (custom_sqrt_helper(n, (guess + n / guess) / 2, guess));
}

/**
 * custom_sqrt - Calculates the square root using recursion
 * @n: The number for which the square root is calculated
 *
 * Return: The square root approximation
 */
int custom_sqrt(int n)
{
	if (n < 0)
		return (-1);  /* or handle negative input accordingly */

	return (custom_sqrt_helper(n, n / 2, 0));
}

/**
 * _sqrt_recursion - Wrapper function for custom_sqrt
 * @n: The number for which the square root is calculated
 *
 * Return: The square root approximation
 */
int _sqrt_recursion(int n)
{
	return (custom_sqrt(n));
}

