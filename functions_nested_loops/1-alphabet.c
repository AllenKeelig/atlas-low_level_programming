#include <stdio.h>

/* Prototype for _putchar */
int _putchar(char c);

/* Function to print the alphabet in lowercase */
void print_alphabet(void);

int main(void)
{
	/* Call the function to print the alphabet */
	print_alphabet();

	return 0;
}

/* Implementation of _putchar (assuming it's defined elsewhere in your code) */
int _putchar(char c)
{
	return putchar(c);
}

/* Function to print the alphabet in lowercase */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		/* Use _putchar to print each letter */
		_putchar(letter);
	}

	/* Print a new line after the alphabet */
	_putchar('\n');
}
