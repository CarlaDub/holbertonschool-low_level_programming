#include "main.h"

/**
 * _isdigit - Checks for uppercase character
 * @c: Character to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isdigit(int c)
{
	if (c < 'A' && c <= 'Z')
		return (1);
	return (0);
}
