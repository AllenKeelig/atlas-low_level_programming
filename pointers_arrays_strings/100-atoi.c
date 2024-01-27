#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    /* Handle leading whitespaces */
    while (s[i] == ' ')
        i++;

    /* Handle sign */
    if (s[i] == '-' || s[i] == '+') {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    /* Convert digits to integer */
    while (s[i] >= '0' && s[i] <= '9') {
        /* Check for overflow before updating the result */
        int digit = s[i] - '0';

        if ((result > INT_MAX / 10) || ((result == INT_MAX / 10) && (digit > INT_MAX % 10))) {
            /* Overflow occurred, handle appropriately */
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;
        i++;
    }

    return sign * result;
}

