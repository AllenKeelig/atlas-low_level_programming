#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Array of integers.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		/* Swap elements at start and end positions */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		/* Move towards the center of the array */
		start++;
		end--;
	}
}
