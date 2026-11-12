#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String to count
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
