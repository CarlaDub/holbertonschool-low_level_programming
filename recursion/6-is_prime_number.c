#include "main.h"

/**
 * is_prime_number - Returns
 * @n: The number to calculate.
 *
 * Return: The result, or -1 if y is negative.
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (1);

	if (n == 0)
		return (0);

	return (n * is_prime_number(n - 1));
}
