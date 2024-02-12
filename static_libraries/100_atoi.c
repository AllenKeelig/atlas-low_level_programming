#include <limits.h>
#include <ctype.h>
#include "main.h"
#include <stdlib.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer or 0 if no digit is found.
 */
int _atoi(char *s)
{
	int sign = 1;
	long result = 0;
	int digit_found = 0;  /* Variable to check if any digit is found */
	int i = 0;

	/* Skip leading non-digit characters and handle the sign */
	while (s[i] != '\0' && !isdigit(s[i]))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Process digits */
	while (isdigit(s[i]))
	{
		digit_found = 1;

		/* Check for overflow */
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			/* Overflow would occur, return appropriate value */
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		/* Update result */
		result = result * 10 + (s[i] - '0');
		i++;
	}

	/* Apply sign to result */
	return (digit_found ? (sign * result) : 0);
}

