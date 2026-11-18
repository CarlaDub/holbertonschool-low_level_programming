#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 * @n:
 *
 * Return: 
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	const char *separator;
	unsigned int i;
	int sum = 0;

	va_start(*separator, n);

	if (*separator == NULL)

	for (i = 0; i < n; i++)
	{
		sum += va_arg(*separator, int);
	}

	va_end(*separator);

	return (sum);
}
