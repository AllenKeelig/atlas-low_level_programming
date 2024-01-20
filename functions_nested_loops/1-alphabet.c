#include <stdio.h>

void _putchar(char c);

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void _putchar(char c)
{
	putchar(c);
}

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
