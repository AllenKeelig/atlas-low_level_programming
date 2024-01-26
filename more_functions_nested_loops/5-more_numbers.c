#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				/* If the number is two digits, print the first digit */
				_putchar('0' + j / 10);
			}
			/* Print the last digit */
			_putchar('0' + j % 10);
		}
		/* Print a new line after each set of numbers */
		_putchar('\n');
	}
}

