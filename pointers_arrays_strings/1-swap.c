#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap_int(int *a, int *b)
{
	/* Use a temporary variable to swap values */
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

