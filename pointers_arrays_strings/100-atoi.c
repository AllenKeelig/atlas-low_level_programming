#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return the output or 0 if no digit
 */

int _atoi(char *s);
{
	int sign = 1;
	long result = 0;
	int i = 0;
	while (s[i] != '\0' && !isdigit(s[i]))
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}
	/* Process digits */
	while (isdigit(*s))
	{
		digit_found = 1;

		/* Check for overflow */
		if (result > (INT_MAX - (*s - '0')) / 10)
		{
			/* Overflow would occur, return appropriate value */
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}

		/* Update result */
		result = result * 10 + (*s - '0');
		s++;
	}
	/* Apply sign to result */
	return (digit_found) ? sign * result : 0;
}

