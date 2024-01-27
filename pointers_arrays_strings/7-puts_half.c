#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: its a string i mean.. whatchu want?
 */
void puts_half(char *str)
{
	size_t length = strlen(str);
	if (length % 2 != 0)
	{
		length = length - 1;
	}
	size_t 2half = length / 2;
	printf("%s\n", str + 2half);
	putchar('\n');
}
