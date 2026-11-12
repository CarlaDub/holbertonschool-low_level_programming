#include "main.h"

/**
 * sqrt_helper - Finds the natural square root.
 * @n: The number.
 * @i: The possible square root.
 *
 * Return: The square root, or -1.
 */
int sqrt_helper(int n, int i)
{
	if (i > n / i)
		return (-1);

	if (i * i == n)
		return (i);

	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root.
 * @n: The number.
 *
 * Return: The square root, or -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (sqrt_helper(n, 1));
}
