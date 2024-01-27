#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers, followed by a newline.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to print.
 *
 * Description: Numbers are separated by a comma and space. Displayed in the
 * same order as they are stored in the array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++) {
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}

