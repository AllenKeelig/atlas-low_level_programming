#include <stdio.h>

/**
 * print_name - prints a name
 * @name: pointer to the fucking thing we're doing
 * @f: wait what is this actually?
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
