#include <stdio.h>
#include "main.h"
#include <string.h>


void _puts_recursion(char *s)
{
	size_t length = strlen(s);	
	if (length == 0)
		return;
	putchar(*s);
	_puts_recursion(s + 1);
}
