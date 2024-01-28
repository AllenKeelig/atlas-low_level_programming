#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1; /* Default sign is positive */

	/* Skip leading whitespace */
	while (*s == ' ' || (*s >= 9 && *s <= 13))
	{
		s++;
	}

	/* Handle sign */
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	/* Process digits */
	while (*s >= '0' && *s <= '9')
	{
		/* Check for overflow */
		if (result > (INT_MAX - (*s - '0')) / 10)
		{
			/* Overflow would occur, return appropriate value */
			if (sign == 1)
			{
				return INT_MAX;
			}
			else
			{
				return INT_MIN;
			}
		}

		/* Update result */
		result = result * 10 + (*s - '0');
		s++;
	}

	/* Apply sign to result */
	return sign * result;
}

