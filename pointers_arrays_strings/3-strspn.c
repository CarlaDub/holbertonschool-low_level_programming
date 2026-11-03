#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to examine
 * @accept: Accepted characters
 *
 * Return: Number of accepted characters at the beginning
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (accept[j] == '\0')
			break;

		count++;
	}

	return (count);
}
