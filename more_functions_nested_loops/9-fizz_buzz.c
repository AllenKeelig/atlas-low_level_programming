#include "main.h"
/**
 * fizz_buzz - fizzbuzz interview test
 */
void fizz_buzz(void)
{
	int digit;

	for (digit=0; digit <= 100; digit++)
	{
		if (digit % 3 == 0 && digit % 5 == 0)
		{
			printf('fizzbuzz ')
		}
		else if (digit % 3 == 0)
		{
			printf('fizz ')
		}
		else if (digit % 5 == 0)
		{
			printf('buzz ')
		}
		else
		{
			_putchar("%d ")
		}
	}
	done
}
