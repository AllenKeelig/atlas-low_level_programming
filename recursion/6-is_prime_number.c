#include "main.h"
#include <stdio.h>

/**
 * is_prime_recursive - Helper function
 * @n: The number to be checked.
 * @divisor: The divisor to check divisibility.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (divisor == 1)
		return (1);  /* 1 is not prime */
	{
		if (n % divisor == 0 && divisor != n)
			return (0);  /* n is divisible by divisor, not prime */
		else
			return (is_prime_recursive(n, divisor - 1));
	}
}

/**
 * is_prime - Check if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);  /* numbers less than 2 are not prime */
	return (is_prime_recursive(n, n - 1));
}
