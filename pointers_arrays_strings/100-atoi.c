#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	long result = 0;
	int i = 0;

	/* Skip leading whitespaces and non-digit characters */
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13) || (s[i] == '-' && s[i + 1] >= '0' && s[i + 1] <= '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Process digits and build the result */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');

		/* Check for overflow or underflow */
		if ((sign == 1 && result > INT_MAX) || (sign == -1 && -result < INT_MIN))
			return sign == 1 ? INT_MAX : INT_MIN;

		i++;
	}

	return sign * (int)result;
}

