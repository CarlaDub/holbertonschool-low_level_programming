#include "main.h"

/**
 * rev_string - Prints a string followed by a new line
 * @s: String to print
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

        while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
