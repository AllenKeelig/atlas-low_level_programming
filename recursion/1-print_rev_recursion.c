#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Prints a reversed string using recursion.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
        /* Calculate the length of the string */
        size_t length = strlen(s);

        /* Base case: if the length is 0, print a newline and return */
        if (length == 0)
        {
                putchar('\n');
                return;
        }

        /* Only change from last */
	s += length - 1;
        putchar(*s);
        _print_rev_recursion(s--);
}
