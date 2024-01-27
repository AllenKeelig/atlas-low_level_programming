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
		length = length + 1;
	}
	length = length / 2;
	printf("%s\n", str + length);
}
