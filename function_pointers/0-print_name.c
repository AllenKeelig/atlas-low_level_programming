#include <stdio.h>

/**
 * print_name - prints a name
 *
 * Return: do I need this here?
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
