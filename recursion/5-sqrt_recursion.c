#include <stdio.h>
#include "main.h"

int custom_sqrt(int n, int guess) 
{
	if (n == 0 || n == 1)
	{
		return n;
	}

	if (guess * guess == n || (guess * guess < n && ((guess + 1) * (guess + 1) > n)))
	{
		return guess;
	}

	return custom_sqrt(n, (n / guess + guess) / 2);
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1)
	int result = custom_sqrt(n, n / 2);
	return (result);
}

