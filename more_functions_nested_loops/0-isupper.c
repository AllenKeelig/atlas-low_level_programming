#include <stdio.h>

/**
 * _isdigit - Checks if a character is a digit (0 through 9).
 * @c: The character to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
    return (c >= '0' && c <= '9') ? 1 : 0;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
    printf("%d\n", _isdigit('5'));
    printf("%d\n", _isdigit('a'));

    return 0;
}

