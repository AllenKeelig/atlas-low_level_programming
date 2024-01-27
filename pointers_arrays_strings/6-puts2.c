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
    unsigned int limit = 224; // Adjust this limit as needed

    while (str[i] != '\0' && i < limit)
    {
        /* Print characters at even indices */
        _putchar(str[i]);
        i += 2;
    }

    /* Print a new line at the end */
    _putchar('\n');
}

