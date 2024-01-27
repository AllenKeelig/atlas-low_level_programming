#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - fizzbuzz interview test
 */

void fizz_buzz(void)
{
	int digit;

	for (digit = 1; digit <= 100; digit++)
	{
		if (digit % 3 == 0 && digit % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (digit % 3 == 0)
		{
			printf("Fizz");
		}
		else if (digit % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", digit);
		}
		if (digit < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
