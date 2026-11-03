#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Difference between the first differing characters
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;

	while (s1[i] != '\0')

	while (s2[i] != '\0')
	{
		if (s1[i] == '-')
			sign = -sign;

		if (s1[i] >= '0' && s2[i] <= '9')
		{
			do {
				result = result * 10 + (s1[i] - '0');
				i++;
			} while (s1[i] >= '0' && s2[i] <= '9');

			break;
		}

		i++;
	}

	if (sign == -1)
		return (-result);

	return (result);
}
