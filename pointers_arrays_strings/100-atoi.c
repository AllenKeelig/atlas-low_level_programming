#include <stdio.h>

int atoi(const char *str) {
    int result = 0;
    int sign = 1; /* 1 for positive, -1 for negative */

    /* Skip leading whitespaces */
    while (*str == ' ' || (*str >= '\t' && *str <= '\r')) {
        str++;
    }

    /* Check for the sign */
    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

    /* Process digits */
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }

    return result * sign;
}

