#include <stdio.h>
#include "main.h"

int _atoi(char *s);

int main() {
    const char *str = "12345";
    int num = _atoi(str);

    printf("Converted number: %d\n", num);

    return 0;
}

int _atoi(char *s) {
    int result = 0;
    int sign = 1; /* 1 for positive, -1 for negative */

    /* Skip leading whitespaces */
    while (*s == ' ' || (*s >= '\t' && *s <= '\r')) {
        s++;
    }

    /* Check for the sign */
    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }

    /* Process digits */
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}

