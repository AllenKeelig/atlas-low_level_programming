#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Prints a reversed string using recursion.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	/*everything online says to do this so thats boring but whatever */
	if (*str) {
        _print_rev_recursion(str + 1);
        putchar(*str);
    }
}
