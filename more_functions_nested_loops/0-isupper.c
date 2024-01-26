#include <stdio.h>

/**
 * _isupper - checks if a character is uppercase
 * @c: the character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}

/**
 * main - example usage of _isupper function
 *
 * Return: Always 0
 */
int main(void)
{
	char testChar = 'A';

	if (_isupper(testChar))
		printf("%c is an uppercase character\n", testChar);
	else
		printf("%c is not an uppercase character\n", testChar);

	return 0;
}

