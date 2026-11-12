#include "main.h"

/**
 * _sqrt_recursion - Returns the factorial of a number.
 * @n: The number to calculate.
 *
 * Return: The factorial of n, or -1 if n is negative.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (n * _sqrt_recursion(n - 1));
}
