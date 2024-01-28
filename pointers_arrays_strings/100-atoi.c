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

    /* Skip leading whitespaces and signs, continue only if there are digits */
    while (isspace(s[i]) || (s[i] == '-' || s[i] == '+') || !isdigit(s[i]))
    {
        if (s[i] == '-')
            sign *= -1;
        i++;

        // If end of string is reached and no digits are encountered, break the loop
        if (s[i] == '\0' && !isdigit(s[i - 1]))
            break;
    }

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

