#include "main.h"
#include <limits.h>
#include <ctype.h>

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
	int digit_found = 0;

	/* Skip leading whitespaces, signs, and non-digit characters */
	while (isspace(s[i]) || (s[i] == '-' || s[i] == '+') || !isdigit(s[i]))
	{
		if (s[i] == '-')
			sign *= -1;
		if (isdigit(s[i]))
			digit_found = 1;
		i++;
	}

	/* If no digits are found, return 0 */
	if (!digit_found)
		return 0;

	/* Process digits and build the result */
	while (isdigit(s[i]))
	{
		result = result * 10 + (s[i] - '0');

		/* Check for overflow or underflow */
		if ((sign == 1 && result > INT_MAX) || (sign == -1 && -result < INT_MIN))
			return (sign == 1 ? INT_MAX : INT_MIN);

		i++;
	}

	return (sign * (int)result);
}

