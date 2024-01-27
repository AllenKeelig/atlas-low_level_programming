#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 * @str: Pointer to the input string
 *
 * Description: This function prints every other character of the input
 * string, starting with the first character, followed by a new line.
 */
void puts2(char *str)
{
    unsigned int i = 0;

    if (!str)
        return; /* Handle NULL pointer gracefully */

    while (str[i] != '\0')
    {
        /* Print characters at even indices */
        _putchar(str[i]);
        i += 2;
    }

    /* Print a new line at the end */
    _putchar('\n');
}

