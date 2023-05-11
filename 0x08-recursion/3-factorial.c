#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a number
 * @n: number to find the factorial of
 * Return: factorial of n if n > 0
 * and  if n < 0 indicate 1 as error.
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	if (n < 0)
		return (1);
	else if (n >= 0 && n <= 1)
		return (1);
	result *= factorial(n - 1);

	return (result);
}

